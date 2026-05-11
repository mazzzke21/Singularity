#pragma once

#include <glm/glm.hpp>

enum class LightType {
    Directional,
    Point,
    Spot
};

struct LightComponent {
    LightType type;
    glm::vec3 color;
    float intensity;
    float radius; // for point/spot
    glm::vec3 direction; // for directional/spot
    float coneAngle; // for spot
    float penumbra; // for spot
};

// Additional structures for shadows, G-buffer etc. would go here.