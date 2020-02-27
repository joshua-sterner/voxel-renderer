#pragma once

#include "vec4.hpp"

class Mat4 {
public:
    Vec4& operator[](int idx) const;
private:
    Vec4 mat[4];
};
