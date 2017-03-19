#include "catch.hpp"

#include "Sphere.h"

TEST_CASE("Sphere", "[sphere][shape]") {
  Sphere sphere;

  SECTION ("indicates its a shape of type SPHERE") {
    REQUIRE (sphere.getType() == ShapeType::SPHERE);
  }

  SECTION ("has initial values set to zero") {
    REQUIRE (sphere.getRadius() == 0 );
    REQUIRE (sphere.getSurfaceArea() == 0);
    REQUIRE (sphere.getColor() == Color(0, 0, 0));
  }

  SECTION ("has setter and getter for Color") {
    Color c(1, 2, 3, 4);
    sphere.setColor(c);
    REQUIRE( sphere.getColor() == c);
  }

  SECTION ("has setter and getter for Radius") {
    sphere.setRadius(45);
    REQUIRE ( sphere.getRadius() == 45);
  }

  SECTION ("does not accept negative numbers for dimensions") {
    REQUIRE_THROWS(sphere.setRadius(-2));
    REQUIRE ( sphere.getRadius() == 0);
  }
}

TEST_CASE("Sphere volume calculation", "[sphere][shape][calculation]") {
  Sphere sphere;

  SECTION ("0 volume if radius is 0") {
    sphere.setRadius(0);
    REQUIRE(sphere.getVolume() == 0);
  }

  SECTION ("according to formula (V= 4/3 * Pi * r^3)") {
    sphere.setRadius(22);
    REQUIRE(sphere.getVolume() == Approx(44602.24));
  }
}

TEST_CASE("Sphere surface area calculation", "[sphere][shape][calculation]") {
  Sphere sphere;

  SECTION ("if radius is 0") {
    sphere.setRadius(0);

    REQUIRE(sphere.getSurfaceArea() == 0);
  }

  SECTION ("according to formula (A = 4 * Pi * r^2)") {
    sphere.setRadius(50);

    REQUIRE(sphere.getSurfaceArea() == Approx(31415.93));
  }
}
