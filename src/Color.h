#ifndef COLOR_H__
#define COLOR_H__

#include <stdint.h>

/**
 * @brief      Representing Color in RGBA color space
 *
 * https://en.wikipedia.org/wiki/RGBA_color_space
 *
 */
struct Color {
  uint8_t r;
  uint8_t g;
  uint8_t b;
  uint8_t a;

  /**
   * @brief      Constructor with all 4 parameters
   *
   * @param[in]  r     red
   * @param[in]  g     green
   * @param[in]  b     blue
   * @param[in]  a     alpha
   */
  Color(uint8_t r, uint8_t g, uint8_t b, uint8_t a) : r(r), g(g), b(b), a(a) {}

  /**
   * @brief      Creates a color that is opaque
   *
   * @param[in]  r     red
   * @param[in]  g     green
   * @param[in]  b     alpha
   */
  Color(uint8_t r, uint8_t g, uint8_t b) : Color (r, g, b, 0xFF) {}


  /**
   * @brief      Default Constructor, creates black fully opaque
   */
  Color() : Color(0, 0, 0) {}
};

/**
 * @brief      Equality operator for Color struct
 *
 * @param[in]  lhs   The left hand side
 * @param[in]  rhs   The right hand side
 *
 * @return     if equal
 */
bool operator==(const Color& lhs, const Color& rhs);

/**
 * @brief      Inequality operator for Color struct
 *
 * @param[in]  lhs   The left hand side
 * @param[in]  rhs   The right hand side
 *
 * @return     if unequal
 */
bool operator!=(const Color& lhs, const Color& rhs);

#endif /* end of include guard: COLOR_H__ */