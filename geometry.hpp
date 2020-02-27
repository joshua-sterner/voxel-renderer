#pragma once

#include "ray.hpp"
#include "material.hpp"

class Geometry {
public:
    virtual IntersectionPoint intersect(Ray ray) const = 0;
};
