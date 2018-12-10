#ifndef CONCRETEFACTORY2_H
#define CONCRETEFACTORY2_H

#include "AbstractFactory.h"
#include "AbstractProductA.h"
#include "AbstractProductB.h"

class ConcreteFactory2 : public AbstractFactory {
 public:
  ConcreteFactory2();
  virtual ~ConcreteFactory2();

  virtual AbstractProductA* createProductA();
  virtual AbstractProductB* createProductB();
};

#endif  // CONCRETEFACTORY2_H
