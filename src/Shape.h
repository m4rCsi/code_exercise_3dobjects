#ifndef SHAPE_H__
#define SHAPE_H__

#include "Color.h"

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
     * @brief      Gets the volume.
     *
     * @return     The volume.
     */
    virtual float getVolume(); 

    /**
     * @brief      Gets the surface area.
     *
     * @return     The surface area.
     */
    virtual float getSurfaceArea();

  protected:
    Color color;
	
};

#endif /* end of include guard: SHAPE_H__ */
