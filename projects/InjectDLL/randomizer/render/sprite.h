#pragma once

#include <enums/layer.h>
#include <macros.h>
#include <randomizer/render/textures.h>

namespace randomizer {
    class Sprite {
    public:
        Sprite(app::GameObject* parent = nullptr);
        ~Sprite();

        Sprite(Sprite const&) = delete;

        void layer(Layer l);
        void local_position(app::Vector3 p);
        void local_scale(app::Vector3 s);
        void local_rotation(float r);

        bool enabled();
        void enabled(bool value);

        void texture(std::shared_ptr<textures::TextureData> texture_data, std::optional<textures::MaterialParams> params);
        void set_parent(app::GameObject* parent);

    private:
        app::GameObject* m_root;
        app::Renderer* m_renderer;

        std::shared_ptr<textures::TextureData> m_texture_data;
        std::optional<textures::MaterialParams> m_texture_params;
    };
} // namespace randomizer
