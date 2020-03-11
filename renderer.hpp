#pragma once

#include "scene.hpp"

class Renderer {
public:
    virtual void render(const Scene& scene, std::vector<std::vector<Color>>& image) const;

private:
    Color traceRay(Ray ray, const Scene& scene, int depth, int maxDepth) const;

    Color traceShadowRays(const IntersectionPoint& intersection, const Scene& scene) const;
    
};
