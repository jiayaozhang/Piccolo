#pragma once
#include "runtime/core/meta/reflection/reflection.h"
#include "runtime/core/color/color.h"


namespace Piccolo
{
    REFLECTION_TYPE(MaterialRes)
    CLASS(MaterialRes, Fields)
    {
        REFLECTION_BODY(MaterialRes);

    public:
        std::string m_base_colour_texture_file;
        std::string m_metallic_roughness_texture_file;
        std::string m_normal_texture_file;
        std::string m_occlusion_texture_file;
        std::string m_emissive_texture_file;
        Color m_main_color;
        bool m_with_texture {false};
        
    };
} // namespace Piccolo