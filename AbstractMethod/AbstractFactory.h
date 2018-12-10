#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "AbstractProductA.h"
#include "AbstractProductB.h"

class AbstractFactory {
 public:
  AbstractFactory();
  virtual ~AbstractFactory();

  virtual AbstractProductA *createProductA() = 0;
  virtual AbstractProductB *createProductB() = 0;
};

#endif  // ABSTRACTFACTORY_H
