#pragma once

struct Color {
    float r;
    float g;
    float b;

    Color& operator+=(const Color& rhs);
    Color operator+(const Color& rhs) const;

    Color& operator*=(float rhs);
    Color operator*(float rhs);
};
