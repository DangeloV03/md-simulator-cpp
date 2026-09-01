#include <iostream>
# include "particle.h"
# include "integrator.h"


int main() {
    std::cout << "Hello, MD!" << std::endl;
    Particle particle;
    particle.position = Vec3{0.0, 0.0, 0.0};
    particle.velocity = Vec3{0.0, 10.0, 0.0};
    particle.acceleration = Vec3{0.0, -9.81, 0.0};
    particle.mass = 1.0;
    double dt = 0.01;
    int total_steps = 100;

    for (int step = 0; step < total_steps; step++) {
        integrate_velocity_step1(particle, dt);
        integrate_velocity_step2(particle, dt);
        std::cout << "Step " << step << ": " << particle.position.x << ", " << particle.position.y << ", " << particle.position.z << std::endl;


    }
}