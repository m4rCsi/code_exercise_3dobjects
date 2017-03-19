#ifndef CONE_H__
#define CONE_H__

#include "Shape.h"

class Cone : public Shape
{
  public:
	  Cone();
	  virtual ~Cone();

    virtual void setDimensions(float r, float h);
};

#endif /* end of include guard: CONE_H__ */