#pragma once

#include <utils/shaders.h>

#include <memory>
#include <optional>
#include <string_view>
#include <unordered_map>

namespace textures
{
    struct MaterialParams
    {
        std::optional<uint32_t> texture;
        std::optional<app::Vector4> uvs;
        std::optional<app::Vector4> scroll_rot;
        std::optional<app::Color> color;
    };

    class TextureData
    {
    public:
        TextureData() = default;
        TextureData(const TextureData&) = delete;
        TextureData& operator=(const TextureData&) = delete;

        ~TextureData();

        void apply(app::Renderer* renderer);

        void set_texture(app::Texture* texture);
        void set_uvs(app::Vector4 uvs);
        void set_scroll_rot(app::Vector4 scroll_rot);
        void set_color(app::Color color);
        void clear_overrides();

        std::wstring const& get_path() { return path; }
    private:
        bool initialized = false;
        std::wstring path;
        MaterialParams local;

        void load_texture();

        friend std::shared_ptr<TextureData> create_texture();
        friend std::shared_ptr<TextureData> get_texture(std::wstring_view path);
    };

    std::shared_ptr<TextureData> create_texture();
    std::shared_ptr<TextureData> get_texture(std::wstring_view path);
    void apply_default(app::Renderer* renderer);
}
