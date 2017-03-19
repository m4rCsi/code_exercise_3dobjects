#include "ShapeFactory.h"

ShapeFactory::ShapeFactory() {

}

ShapeFactory::~ShapeFactory() {

}

std::unique_ptr<Shape> ShapeFactory::createShape(ShapeType type) {
  switch (type) {
  case (ShapeType::CONE): return createCone();
  case (ShapeType::CUBOID): return createCuboid();
  case (ShapeType::SPHERE): return createSphere();
  default: return nullptr;
  }
}

std::unique_ptr<Cone> ShapeFactory::createCone() {
  return std::make_unique<Cone>();
}

std::unique_ptr<Cuboid> ShapeFactory::createCuboid() {
  return std::make_unique<Cuboid>();
}

std::unique_ptr<Sphere> ShapeFactory::createSphere() {
  return std::make_unique<Sphere>();
}