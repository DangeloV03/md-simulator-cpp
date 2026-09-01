#include <iostream>
# include "particle.h"


int main() {
    std::cout << "Hello, MD!" << std::endl;
    Particle particle;
    particle.position = Vec3{1.0, 2.0, 3.0};

    std::cout << "Particle position: " << particle.position.x << ", " << particle.position.y << ", " << particle.position.z << std::endl;

    
    particle.position = Vec3{0.0, 0.0, 0.0};
    particle.velocity = Vec3{0.0, 10.0, 0.0};
    particle.acceleration = Vec3{0.0, -9.81, 0.0};
    particle.mass = 1.0;
    double dt = 0.01;
    int total_steps = 100;

    for (int step = 0; step < total_steps; step++) {
        particle.position = particle.position + particle.velocity * dt;
        particle.velocity = particle.velocity + particle.acceleration * dt;
        std::cout << "Step " << step << ": " << particle.position.x << ", " << particle.position.y << ", " << particle.position.z << std::endl;


    }
}