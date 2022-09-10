#pragma once
#include "runtime/core/math/transform.h"
#include "runtime/core/meta/reflection/reflection.h"
#include "runtime/core/color/color.h"

namespace Piccolo
{
    REFLECTION_TYPE(SubMeshRes)
    CLASS(SubMeshRes, Fields)
    {
        REFLECTION_BODY(SubMeshRes);

    public:
        std::string m_obj_file_ref;
        Transform   m_transform;
        std::string m_material;
    };

    REFLECTION_TYPE(MeshComponentRes)
    CLASS(MeshComponentRes, Fields)
    {
        REFLECTION_BODY(MeshComponentRes);

    public:
        std::vector<SubMeshRes> m_sub_meshes;
        //在 MeshComponent 中增加一个 color 属性，可以动态修改 base color，与原 base color 叠加
        Color m_color {1.0f, 1.0f, 1.0f};

    };
} // namespace Piccolo