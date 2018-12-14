#ifndef CONCRETEIMPLEMENTORA_H
#define CONCRETEIMPLEMENTORA_H

#include "Implementor.h"

class ConcreteImplementorA : public Implementor {
 public:
  ConcreteImplementorA();
  virtual ~ConcreteImplementorA();

  virtual void operationImp() override;
};

#endif  // CONCRETEIMPLEMENTORA_H
