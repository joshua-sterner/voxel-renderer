#pragma once

#include "scene.hpp"

class Renderer {
public:
    virtual void render(const Scene& scene, std::vector<std::vector<Color>>& image) const;

private:
    Color traceRay(float x, float y, const Scene& scene) const;
};
