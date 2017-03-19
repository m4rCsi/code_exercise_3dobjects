#include "Sphere.h"
#include <math.h>
#include <stdexcept>

Sphere::Sphere() : radius(0) {}
Sphere::~Sphere() {}


void Sphere::setRadius(float r) {
  if (r < 0) { throw std::invalid_argument("Radius cannot be negative!"); }
  radius = r;
}

float Sphere::getRadius() {
  return radius;
}

ShapeType Sphere::getType() {
  return ShapeType::SPHERE;
}

float Sphere::getVolume() {
  return M_PI * radius * radius * radius * 4 / 3;
}

float Sphere::getSurfaceArea() {
  return 4 * M_PI * radius * radius;
}