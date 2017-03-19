#include "catch.hpp"

#include "Cuboid.h"

TEST_CASE("Cuboid", "[cuboid][shape]") {
  Cuboid cuboid;

  SECTION ("indicates its a shape of type CUBOID") {
    REQUIRE (cuboid.getType() == ShapeType::CUBOID);
  }

  SECTION ("has initial values set to zero") {
    REQUIRE (cuboid.getWidth() == 0 );
    REQUIRE (cuboid.getLength() == 0 );
    REQUIRE (cuboid.getHeight() == 0 );
    REQUIRE (cuboid.getVolume() == 0 );
    REQUIRE (cuboid.getSurfaceArea() == 0);
    REQUIRE (cuboid.getColor() == Color(0, 0, 0));
  }

  SECTION ("has setter and getter for Color") {
    Color c(1, 2, 3, 4);
    cuboid.setColor(c);
    REQUIRE( cuboid.getColor() == c);
  }

  SECTION ("has setter and getter for Width") {
    cuboid.setWidth(11);
    REQUIRE ( cuboid.getWidth() == 11);
  }

  SECTION ("has setter and getter for Length") {
    cuboid.setLength(45);
    REQUIRE ( cuboid.getLength() == 45);
  }

  SECTION ("has setter and getter for Height") {
    cuboid.setHeight(22);
    REQUIRE ( cuboid.getHeight() == 22);
  }

  SECTION ("does not accept negative numbers for dimensions") {
    REQUIRE_THROWS(cuboid.setWidth(-8));
    REQUIRE ( cuboid.getWidth() == 0);

    REQUIRE_THROWS(cuboid.setLength(-2));
    REQUIRE ( cuboid.getLength() == 0);

    REQUIRE_THROWS(cuboid.setHeight(-5));
    REQUIRE ( cuboid.getHeight() == 0);
  }
}

TEST_CASE("Cuboid volume calculation", "[cuboid][shape][calculation]") {
  Cuboid cuboid;

  SECTION ("0 volume if height is 0") {
    cuboid.setHeight(0);
    cuboid.setLength(50);
    cuboid.setWidth(22);
    REQUIRE(cuboid.getVolume() == 0);
  }

  SECTION ("0 volume if length is 0") {
    cuboid.setHeight(10);
    cuboid.setLength(0);
    cuboid.setWidth(22);
    REQUIRE(cuboid.getVolume() == 0);
  }

  SECTION ("0 volume if width is 0") {
    cuboid.setHeight(10);
    cuboid.setLength(50);
    cuboid.setWidth(0);
    REQUIRE(cuboid.getVolume() == 0);
  }

  SECTION ("according to formula (V= h * w * l)") {
    cuboid.setHeight(10);
    cuboid.setLength(50);
    cuboid.setWidth(22);
    REQUIRE(cuboid.getVolume() == Approx(11000));
  }
}

TEST_CASE("Cuboid surface area calculation", "[cuboid][shape][calculation]") {
  Cuboid cuboid;

  SECTION ("if height is 0") {
    cuboid.setHeight(0);
    cuboid.setLength(50);
    cuboid.setWidth(22);
    REQUIRE(cuboid.getSurfaceArea() == Approx(2200));
  }

  SECTION ("if length is 0") {
    cuboid.setHeight(10);
    cuboid.setLength(0);
    cuboid.setWidth(22);
    REQUIRE(cuboid.getSurfaceArea() == Approx(440));
  }

  SECTION ("if width is 0") {
    cuboid.setHeight(10);
    cuboid.setLength(50);
    cuboid.setWidth(0);
    REQUIRE(cuboid.getSurfaceArea() == Approx(1000));
  }

  SECTION ("according to formula (A = 2 ( lw + wh + hl) )") {
    cuboid.setHeight(22);
    cuboid.setLength(50);

    REQUIRE(cuboid.getSurfaceArea() == Approx(2200));
  }
}
