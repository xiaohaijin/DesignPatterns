#ifndef REDEFINEDABSTRACTION_H
#define REDEFINEDABSTRACTION_H

#include "Abstraction.h"

class RedefinedAbstraction : public Abstraction {
 public:
  RedefinedAbstraction();
  RedefinedAbstraction(Implementor *imp);
  virtual ~RedefinedAbstraction();

  virtual void operation();
};

#endif  // REDEFINEDABSTRACTION_H
