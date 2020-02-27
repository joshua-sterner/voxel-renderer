#pragma once

struct Vec4 {
    double x;
    double y;
    double z;
    double w;
    double operator[](int idx) const;
};
