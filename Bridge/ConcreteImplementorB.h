#ifndef CONCRETEIMPLEMENTORB_H
#define CONCRETEIMPLEMENTORB_H

#include "Implementor.h"

class ConcreteImplementorB : public Implementor {
 public:
  ConcreteImplementorB();
  virtual ~ConcreteImplementorB();

  virtual void operationImp() override;
};

#endif  // CONCRETEIMPLEMENTORB_H
