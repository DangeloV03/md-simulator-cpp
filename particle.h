#pragma once

#include "vec3.h"

struct Particle {
    Vec3 position;
    Vec3 velocity;
    Vec3 acceleration;
    double mass;
};