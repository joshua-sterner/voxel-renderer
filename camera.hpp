#pragma once

#include "vec4.hpp"
#include "mat4.hpp"

struct Camera {
    Mat4 transformation;
    float hFov;
    float vFov;
};
