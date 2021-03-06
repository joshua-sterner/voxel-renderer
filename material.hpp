#pragma once

#include "color.hpp"
#include "vec4.hpp"
#include "ray.hpp"
#include <cstdint>

class Material {
public:
    virtual Color computeColor(Color incomingColor, Vec4 incomingVector, Vec4 normal, Vec4 outgoingVector) const = 0;
    virtual Vec4 reflectionVec(Vec4 normal, Vec4 outgoingVector) const = 0;
    virtual Vec4 refractionVec(Vec4 normal, Vec4 outgoingVector) const = 0;
};

using MaterialID = uint16_t;

struct IntersectionPoint {
    MaterialID material;
    Vec4 point;
    Vec4 normal;
};

