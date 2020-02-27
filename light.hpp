#pragma once

#include "vec4.hpp"
#include "color.hpp"

class Light {
public:
    virtual Vec4 point() const = 0;
    virtual Color computeColor(Vec4 outgoing) const = 0;
};
