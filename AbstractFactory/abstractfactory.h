#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "abstractproduct.h"

class AbstractFactory {
 public:
  AbstractFactory();

  virtual ~AbstractFactory();
  virtual AbstractProduct *createProductA() = 0;
  virtual AbstractProduct *createProductB() = 0;
};

#endif  // ABSTRACTFACTORY_H
