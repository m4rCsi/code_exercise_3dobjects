#include "Shape.h"

Shape::Shape() {}
Shape::~Shape() {}

void Shape::setColor(const Color &color) {
  this->color = color;
}


Color Shape::getColor() {
  return color;
}