#ifndef CUBOID_H__
#define CUBOID_H__

#include "Shape.h"

class Cuboid : public Shape
{
  public:
    Cuboid();
    virtual ~Cuboid();

    virtual void setWidth(float w);


    virtual float getWidth();



    virtual void setLength(float l);


    virtual float getLength();

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
    float length;
    float width;
    float height;

};

#endif /* end of include guard: CUBOID_H__ */