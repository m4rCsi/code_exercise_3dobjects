#ifndef SHAPEFACTORY_H__
#define SHAPEFACTORY_H__

#include <memory>

#include "Shape.h"
#include "Cone.h"
#include "Cuboid.h"
#include "Sphere.h"

/**
 * @brief      Factory to create all types of Shapes
 */
class ShapeFactory
{
  public:
    ShapeFactory();
    virtual ~ShapeFactory();

    /**
     * @brief      Creates a shape.
     *
     * @param[in]  type  The type of the shape to be created
     *
     * @return     unique pointer
     */
    virtual std::unique_ptr<Shape> createShape(ShapeType type);

    /**
     * @brief      Creates a cone.
     *
     * @return     unique pointer
     */
    virtual std::unique_ptr<Cone> createCone();

    /**
     * @brief      Creates a cuboid.
     *
     * @return     unique pointer
     */
    virtual std::unique_ptr<Cuboid> createCuboid();

    /**
     * @brief      Creates a sphere.
     *
     * @return     unique pointer
     */
    virtual std::unique_ptr<Sphere> createSphere();

};

#endif /* end of include guard: SHAPEFACTORY_H__ */