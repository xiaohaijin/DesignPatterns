#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "abstractfactory.h"
#include "abstractproduct.h"

class ConcreteFactory : public AbstractFactory {
 public:
  ConcreteFactory();

  virtual AbstractProduct *createProductA() override;
  virtual AbstractProduct *createProductB() override;
};

#endif  // CONCRETEFACTORY_H
