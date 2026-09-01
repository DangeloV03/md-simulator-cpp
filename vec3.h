#pragma once 

struct Vec3 {
    double x, y, z;

    Vec3 operator+(const Vec3& other) const {
        return Vec3{x + other.x, y + other.y, z + other.z};
    }

    Vec3 operator*(const double& scalar) const {
        return Vec3{x * scalar, y * scalar, z * scalar};
    }
};