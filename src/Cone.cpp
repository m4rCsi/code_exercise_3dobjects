#include "Cone.h"
#include <math.h>
#include <stdexcept>

Cone::Cone() : radius(0), height(0) {}
Cone::~Cone() {}

void Cone::setRadius(float r) {
  if (r < 0) { throw std::invalid_argument("Radius cannot be negative!"); }
  radius = r;
}

float Cone::getRadius() {
  return radius;
}

void Cone::setHeight(float h) {
  if (h < 0) { throw std::invalid_argument("Height cannot be negative!"); }
  height = h;
}

float Cone::getHeight() {
  return height;
}

ShapeType Cone::getType() { return ShapeType::CONE; }

float Cone::getVolume() {
  return radius * radius * height * M_PI / 3;
}

float Cone::getSurfaceArea() {
  float radius_squared = radius * radius;

  // Lateral surface: Pi * radius * sqrt(h^2 + r^2)
  float area = M_PI * sqrt(radius_squared + height * height) * radius;

  // base: Pi * radius
  area += M_PI * radius_squared;

  return area;
}