#include <iostream>
# include "particle.h"


int main() {
    std::cout << "Hello, MD!" << std::endl;
    Particle particle;
    particle.position = Vec3{1.0, 2.0, 3.0};

    std::cout << "Particle position: " << particle.position.x << ", " << particle.position.y << ", " << particle.position.z << std::endl;

}