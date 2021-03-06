#ifndef CONE_H__
#define CONE_H__

#include "Shape.h"

/**
 * @brief      Represents a 3D Cone
 *
 * The cone is defined by two dimensions: radius and height.
 */
class Cone : public Shape
{
  public:
    Cone();
    virtual ~Cone();

    /**
     * @brief      Sets the radius.
     *
     * @param[in]  r     radius
     */
    virtual void setRadius(float r);

    /**
     * @brief      Gets the radius.
     *
     * @return     The radius.
     */
    virtual float getRadius();

    /**
     * @brief      Sets the height.
     *
     * @param[in]  h     height
     */
    virtual void setHeight(float h);

    /**
     * @brief      Gets the height.
     *
     * @return     The height.
     */
    virtual float getHeight();

    /**
     * @brief      Gets the type.
     *
     * @return     The type.
     */
    virtual ShapeType getType() override;

    /**
    * @brief      Gets the volume.
    *
    * @return     The volume.
    */
    virtual float getVolume() override;

    /**
     * @brief      Gets the surface area.
     *
     * @return     The surface area.
     */
    virtual float getSurfaceArea() override;

  protected:
    float radius;
    float height;
};

#endif /* end of include guard: CONE_H__ */