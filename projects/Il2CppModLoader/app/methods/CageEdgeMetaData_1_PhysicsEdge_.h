#pragma once
#include <Il2CppModloader/interception_macros.h>

namespace app::methods::CageEdgeMetaData_1_PhysicsEdge_ {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnMergeEdge, (app::CageEdgeMetaData_1_PhysicsEdge_ * this_ptr, app::CageStructureTool_Edge * edge_a, app::CageStructureTool_Edge * edge_b, app::CageStructureTool_Edge * new_edge))
    IL2CPP_REGISTER_METHODINFO(0x04793E78, CageEdgeMetaData_1_PhysicsEdge__OnMergeEdge__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnSplitEdge, (app::CageEdgeMetaData_1_PhysicsEdge_ * this_ptr, app::CageStructureTool_Edge * edge, app::CageStructureTool_Edge * new_edge_a, app::CageStructureTool_Edge * new_edge_b))
    IL2CPP_REGISTER_METHODINFO(0x04762770, CageEdgeMetaData_1_PhysicsEdge__OnSplitEdge__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D9BE0, void, ctor, (app::CageEdgeMetaData_1_PhysicsEdge_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04765268, CageEdgeMetaData_1_PhysicsEdge___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D9790, void, OnRemoveEdge, (app::CageEdgeMetaData_1_PhysicsEdge_ * this_ptr, app::CageStructureTool_Edge * edge))
}
