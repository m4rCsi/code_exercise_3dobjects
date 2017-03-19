#include "catch.hpp"

#include "Cone.h"

TEST_CASE("Cone", "[cone][shape]") {
  Cone cone;

  SECTION ("indicates its a shape of type CONE") {
    REQUIRE (cone.getType() == ShapeType::CONE);
  }

  SECTION ("has initial values set to zero") {
    REQUIRE (cone.getRadius() == 0 );
    REQUIRE (cone.getHeight() == 0 );
    REQUIRE (cone.getVolume() == 0 );
    REQUIRE (cone.getSurfaceArea() == 0);
    REQUIRE (cone.getColor() == Color(0, 0, 0));
  }

  SECTION ("has setter and getter for Color") {
    Color c(1, 2, 3, 4);
    cone.setColor(c);
    REQUIRE( cone.getColor() == c);
  }

  SECTION ("has setter and getter for Radius") {
    cone.setRadius(45);
    REQUIRE ( cone.getRadius() == 45);
  }

  SECTION ("has setter and getter for Height") {
    cone.setHeight(22);
    REQUIRE ( cone.getHeight() == 22);
  }

  SECTION ("does not accept negative numbers for dimensions") {
    REQUIRE_THROWS(cone.setRadius(-2));
    REQUIRE ( cone.getRadius() == 0);

    REQUIRE_THROWS(cone.setHeight(-5));
    REQUIRE ( cone.getHeight() == 0);
  }
}

TEST_CASE("Cone volume calculation", "[cone][shape][calculation]") {
  Cone cone;

  SECTION ("0 volume if height is 0") {
    cone.setHeight(0);
    cone.setRadius(50);
    REQUIRE(cone.getVolume() == 0);
  }

  SECTION ("0 volume if radius is 0") {
    cone.setHeight(10);
    cone.setRadius(0);
    REQUIRE(cone.getVolume() == 0);
  }

  SECTION ("according to formula (V= 1/3 * Pi * r^2 * h)") {
    cone.setHeight(10);
    cone.setRadius(22);
    REQUIRE(cone.getVolume() == Approx(5068.436));
  }
}

TEST_CASE("Cone surface area calculation", "[cone][shape][calculation]") {
  Cone cone;

  SECTION ("TSA if height is 0") {
    cone.setHeight(0);
    cone.setRadius(50);

    // Should be twice the base area
    REQUIRE(cone.getSurfaceArea() == Approx(15707.96));
  }

  SECTION ("TSA if radius is 0") {
    cone.setHeight(22);
    cone.setRadius(0);

    REQUIRE(cone.getSurfaceArea() == 0);
  }

  SECTION ("according to formula (A = Pi * r * sqrt(r^2 + h^2) + pi * r^2") {
    cone.setHeight(22);
    cone.setRadius(50);

    REQUIRE(cone.getSurfaceArea() == Approx(16434.61));
  }
}
