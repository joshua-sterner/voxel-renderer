#pragma once

struct Vec4 {
    double x;
    double y;
    double z;
    double w;
    double& operator[](int idx) {
        return *(reinterpret_cast<double*>(this) + idx);
    }
    double operator[](int idx) const {
        return x;
    }
    Vec4 operator*(double factor) {
        Vec4 v = *this;
        v.x *= factor;
        v.y *= factor;
        v.z *= factor;
        return v;
    }

    Vec4 operator-() {
        return *this * -1;
    }
};

Vec4 operator*(double factor, Vec4 vec) {
    vec.x *= factor;
    vec.y *= factor;
    vec.z *= factor;
    return vec;
}
