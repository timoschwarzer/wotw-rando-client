#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::System::Linq::Enumerable_WhereListIterator_1_SceneLoadingQueue_QueueSceneToLoad_ {
    IL2CPP_REGISTER_METHOD(0x02894030, void, ctor, (app::Enumerable_WhereListIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::List_1_SceneLoadingQueue_QueueSceneToLoad_ * source, app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * predicate))
    IL2CPP_REGISTER_METHOD(0x02894080, app::Enumerable_Iterator_1_SceneLoadingQueue_QueueSceneToLoad_ *, Clone, (app::Enumerable_WhereListIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x028941B0, bool, MoveNext, (app::Enumerable_WhereListIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02894390, app::IEnumerable_1_SceneLoadingQueue_QueueSceneToLoad_ *, Where, (app::Enumerable_WhereListIterator_1_SceneLoadingQueue_QueueSceneToLoad_ * this_ptr, app::Func_2_SceneLoadingQueue_QueueSceneToLoad_Boolean_ * predicate))
}
