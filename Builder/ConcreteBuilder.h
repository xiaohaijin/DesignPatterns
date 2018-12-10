#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "Builder.h"

class ConcreteBuilder : public Builder {
 public:
  ConcreteBuilder();
  virtual ~ConcreteBuilder();

  virtual void buildPartA() override;
  virtual void buildPartB() override;
  virtual void buildPartC() override;
};

#endif  // CONCRETEBUILDER_H
