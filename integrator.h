#pragma once

#include "particle.h"

/*
Plain Particle p: creates a copy of the 80-byte struct; changes inside the function 
    would only modify the copy and disappear when the function returns.

const Particle& p: passes the original struct without copying, but makes it read-only, preventing 
    us from updating position and velocity.

Particle& p (non-const reference): passes an alias to the original struct without copying, 
    allowing direct in-place modifications.
*/

void integrate_velocity_step1(Particle& p, double dt) {
    p.velocity = p.velocity + p.acceleration * (0.5 * dt);
    p.position = p.position + p.velocity * dt;
}

void integrate_velocity_step2(Particle& p, double dt) {
    p.velocity = p.velocity + p.acceleration * (0.5 * dt);
}