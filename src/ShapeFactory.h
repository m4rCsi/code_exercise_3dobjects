#ifndef SHAPEFACTORY_H__
#define SHAPEFACTORY_H__

#include <memory>

class ShapeFactory
{
  public:
	  ShapeFactory();
	  virtual ~ShapeFactory();

    /**
     * @brief      Creates a cone.
     *
     * @return     { description_of_the_return_value }
     */
    std::unique_ptr<Cone> createCone();

    /**
     * @brief      Creates a cuboid.
     *
     * @return     { description_of_the_return_value }
     */
    std::unique_ptr<Cuboid> createCuboid();

    /**
     * @brief      Creates a sphere.
     *
     * @return     { description_of_the_return_value }
     */
    std::unique_ptr<Spehere> createSphere();

};

#endif /* end of include guard: SHAPEFACTORY_H__ */