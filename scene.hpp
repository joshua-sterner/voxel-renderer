#pragma once

#include "geometry.hpp"
#include "light.hpp"
#include "ray.hpp"
#include "material.hpp"
#include <vector>

using LightID = uint16_t;
using GeometryID = uint16_t;

class Scene {
public:
    
    using ConstLightIterator = std::vector<Light>::const_iterator;

    virtual Material& getMaterial(MaterialID id) const;
    virtual MaterialID addMaterial(const Material& mat);
    virtual Light& getLight(LightID id) const;
    virtual LightID addLight(const Light& light);
    virtual ConstLightIterator lightsBegin() const;
    virtual ConstLightIterator lightsEnd() const;
    virtual Geometry& getGeometry(GeometryID id) const;
    virtual GeometryID addGeometry(const Geometry& geometry);
    virtual IntersectionPoint intersect(Ray ray) const;

private:
    std::vector<Material> materials;
    std::vector<Geometry> geometries;
    std::vector<Light> lights;
    
};
