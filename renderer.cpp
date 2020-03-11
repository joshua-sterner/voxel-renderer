#include "renderer.hpp"
#include "material.hpp"

Color Renderer::traceRay(Ray ray, const Scene& scene, int depth, int maxDepth) const {
    
    IntersectionPoint intersection = scene.intersect(ray);
    Color c = traceShadowRays(intersection, scene);

    if (depth++ != maxDepth) {
        const Material& mat = scene.getMaterial(intersection.material);
        Vec4 incomingVec = mat.reflectionVec(intersection.normal, ray.dir);
        Ray newRay = {intersection.point, incomingVec};
        Color incomingColor = traceRay(newRay, scene, depth+1, maxDepth);
        c += mat.computeColor(incomingColor, incomingVec, intersection.normal, -ray.dir);

        incomingVec = mat.refractionVec(intersection.normal, ray.dir);
        newRay = {intersection.point, incomingVec};
        incomingColor = traceRay(newRay, scene, depth+1, maxDepth);
        c += mat.computeColor(incomingColor, incomingVec, intersection.normal, -ray.dir);
    }

    return c;
}
