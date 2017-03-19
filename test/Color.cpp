#include "catch.hpp"

#include "Cone.h"

TEST_CASE("Color creates black by default", "[color]") {
  Color a;

  REQUIRE (a.r == 0);
  REQUIRE (a.g == 0);
  REQUIRE (a.b == 0);
  REQUIRE (a.a == 255);
}

TEST_CASE("Color comparison", "[color]") {
  Color a(1, 2, 3, 4);
  Color b(5, 6, 7, 8);
  Color c(1, 2, 3, 4);

  SECTION ("are same if same object") {
    REQUIRE (a == a);
  }

  SECTION ("are different if different values") {
    REQUIRE (a != b);
  }

  SECTION ("are same if same values") {
    REQUIRE (a == c);
  }
}
