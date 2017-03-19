#ifndef SPHERE_H__
#define SPHERE_H__

#include "Shape.h"

class Sphere : public Shape
{
  public:
    Sphere();
    virtual ~Sphere();

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
};


#endif /* end of include guard: SPHERE_H__ */