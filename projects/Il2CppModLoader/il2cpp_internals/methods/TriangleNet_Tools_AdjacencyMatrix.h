#include <interception_macros.h>

namespace app::methods::TriangleNet_Tools::AdjacencyMatrix {
IL2CPP_REGISTER_METHOD(0x002FB930, Int32__Array *, get_ColumnPointers, (app::AdjacencyMatrix * this_ptr));
IL2CPP_REGISTER_METHOD(0x002FB950, Int32__Array *, get_RowIndices, (app::AdjacencyMatrix * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A94070, void, __ctor_1, (app::AdjacencyMatrix * this_ptr, app::Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A94270, void, __ctor_2, (app::AdjacencyMatrix * this_ptr, app::Int32__Array * pcol, app::Int32__Array * irow));
IL2CPP_REGISTER_METHODINFO(0x0472F690, AdjacencyMatrix__ctor_1__MethodInfo);
IL2CPP_REGISTER_METHOD(0x02A943D0, int32_t, Bandwidth, (app::AdjacencyMatrix * this_ptr));
IL2CPP_REGISTER_METHOD(0x02A94590, Int32__Array *, AdjacencyCount, (app::AdjacencyMatrix * this_ptr, app::Mesh_1 * mesh));
IL2CPP_REGISTER_METHOD(0x02A94BF0, Int32__Array *, AdjacencySet, (app::AdjacencyMatrix * this_ptr, app::Mesh_1 * mesh, app::Int32__Array * pcol));
IL2CPP_REGISTER_METHOD(0x02A952F0, void, SortIndices, (app::AdjacencyMatrix * this_ptr));
}
