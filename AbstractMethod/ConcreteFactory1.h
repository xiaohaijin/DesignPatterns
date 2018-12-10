#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H

#include "AbstractFactory.h"

class AbstractProductA;
class AbstractProductB;

class ConcreteFactory1 : public AbstractFactory {
 public:
  ConcreteFactory1();
  virtual ~ConcreteFactory1();

  virtual AbstractProductA *createProductA() override;
  virtual AbstractProductB *createProductB() override;
};

#endif  // CONCRETEFACTORY1_H
