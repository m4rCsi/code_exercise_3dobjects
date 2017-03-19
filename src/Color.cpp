#include "Color.h"

bool operator==(const Color& lhs, const Color& rhs) {
  if (lhs.r != rhs.r ||
      lhs.g != rhs.g ||
      lhs.b != rhs.b ||
      lhs.a != rhs.a) {
    return false;
  }
  return true;
}

bool operator!=(const Color& lhs, const Color& rhs) {
  return !(lhs == rhs);
}