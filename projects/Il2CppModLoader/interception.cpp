#include <Common/ext.h>
#include <common.h>

#include <il2cpp_helpers.h>
#include <interception.h>
#include <windows_api/console.h>
#include <windows_api/memory.h>
#include <windows_api/detours.h>

#include <fstream>
#include <json/json.hpp>

#include <unordered_map>

using namespace modloader::win;

namespace modloader {
    extern std::string base_path;
    extern std::string modloader_path;

    namespace interception {
        binding* first_binding = nullptr;
        binding* last_binding = nullptr;
        intercept* first_intercept = nullptr;
        intercept* last_intercept = nullptr;

		void internal_bindings() {
			auto current = last_binding;
			while (current != nullptr) {
				*current->pointer = reinterpret_cast<void*>(memory::resolve_rva(current->offset));
				current = current->prev;
			}
		}

        void internal_intercepts() {
            detours::start_transaction();

            auto current = last_intercept;
            while (current != nullptr) {
                *current->original_pointer = *current->binding_pointer;
                if (current->intercept_pointer) {
                    detours::do_intercept(
                            format("%s (%d, %d)", current->name.data(), memory::get_game_assembly_address(), reinterpret_cast<uint64_t>(*current->binding_pointer)),
                            current->original_pointer,
                            current->intercept_pointer
                    );
                }

                current = current->prev;
            }

            detours::commit("intercepts");
        }

        void interception_init() {
            internal_bindings();
            internal_intercepts();
        }

        void interception_detach() {
            detours::start_transaction();

            auto current = last_intercept;
            while (current) {
                if (current->intercept_pointer)
                    detours::detach(current->original_pointer, current->intercept_pointer);

                current = current->prev;
            }

            detours::commit("detach");
        }

        binding::binding(uint64_t address, void** ptr, std::string_view s) :
            name(s), offset(address), pointer(ptr), next(nullptr) {
            prev = last_binding;
            if (prev != nullptr)
                prev->next = prev;

            last_binding = this;
            if (first_binding == nullptr)
                first_binding = this;
        }

        intercept::intercept(void** binding_ptr, void** original, void* intercepted, std::string_view s) :
                name(s), binding_pointer(binding_ptr), original_pointer(original), intercept_pointer(intercepted), next(nullptr) {
            prev = last_intercept;
            if (prev != nullptr)
                prev->next = prev;

            last_intercept = this;
            if (first_intercept == nullptr)
                first_intercept = this;
        }
    } // namespace interception
} // namespace modloader
