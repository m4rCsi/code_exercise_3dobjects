#include "catch.hpp"

#include "ShapeFactory.h"

TEST_CASE("ShapeFactory createShape", "[factory]") {
  ShapeFactory factory;

  SECTION( "creates cone" ) {
    std::unique_ptr<Shape> cone = factory.createShape(ShapeType::CONE);
    REQUIRE (cone->getType() == ShapeType::CONE);
  }

  SECTION( "creates cuboid" ) {
    std::unique_ptr<Shape> cone = factory.createShape(ShapeType::CUBOID);
    REQUIRE (cone->getType() == ShapeType::CUBOID);
  }

  SECTION( "creates sphere" ) {
    std::unique_ptr<Shape> cone = factory.createShape(ShapeType::SPHERE);
    REQUIRE (cone->getType() == ShapeType::SPHERE);
  }
}

TEST_CASE("ShapeFactory createTYPE", "[factory]") {
  ShapeFactory factory;

  SECTION( "creates cone" ) {
    std::unique_ptr<Cone> cone = factory.createCone();
    REQUIRE (cone->getType() == ShapeType::CONE);
  }

  SECTION( "creates cuboid" ) {
    std::unique_ptr<Cuboid> cone = factory.createCuboid();
    REQUIRE (cone->getType() == ShapeType::CUBOID);
  }

  SECTION( "creates sphere" ) {
    std::unique_ptr<Sphere> cone = factory.createSphere();
    REQUIRE (cone->getType() == ShapeType::SPHERE);
  }
}

