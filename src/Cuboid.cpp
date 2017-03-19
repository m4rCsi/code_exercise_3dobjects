#include "Cuboid.h"
#include <math.h>
#include <stdexcept>

Cuboid::Cuboid() : width(0), length(0), height(0) {}
Cuboid::~Cuboid() {}

void Cuboid::setWidth(float w) {
  if (w < 0) { throw std::invalid_argument("Width cannot be negative!"); }
  width = w;
}


float Cuboid::getWidth() {
  return width;
}

void Cuboid::setLength(float l) {
  if (l < 0) { throw std::invalid_argument("Length cannot be negative!"); }
  length = l;
}

float Cuboid::getLength() {
  return length;
}

void Cuboid::setHeight(float h) {
  if (h < 0) { throw std::invalid_argument("Height cannot be negative!"); }
  height = h;
}

float Cuboid::getHeight() {
  return height;
}

ShapeType Cuboid::getType() {
  return ShapeType::CUBOID;
}

float Cuboid::getVolume() {
  return height * width * length;
}

float Cuboid::getSurfaceArea()  {
  return 2 * (length * width + width * height + height * length);
}