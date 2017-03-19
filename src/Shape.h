#ifndef SHAPE_H__
#define SHAPE_H__

#include <stdint.h>
#include "Color.h"

/**
 * @brief      Possible Types of the Shape
 */
enum class ShapeType : uint8_t {
  CONE,
  CUBOID,
  SPHERE
};

/**
 * @brief      Abstract class for a Shape
 */
class Shape
{
  public:
    Shape();
    virtual ~Shape();

    /**
     * @brief      Sets the color.
     *
     * @param[in]  color  The color
     */
    virtual void setColor(const Color &color);

    /**
     * @brief      Gets the color.
     *
     * @return     The color.
     */
    virtual Color getColor();

    /**
     * @brief      Gets the type.
     *
     * @return     The type.
     */
    virtual ShapeType getType() = 0;

    /**
     * @brief      Gets the volume.
     *
     * @return     The volume.
     */
    virtual float getVolume() = 0;

    /**
     * @brief      Gets the surface area.
     *
     * @return     The surface area.
     */
    virtual float getSurfaceArea() = 0;

  protected:
    Color color;

};

#endif /* end of include guard: SHAPE_H__ */
