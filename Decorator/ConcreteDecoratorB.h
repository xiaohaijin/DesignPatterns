#ifndef CONCRETEDECORATORB_H
#define CONCRETEDECORATORB_H

#include "Component.h"
#include "Decorator.h"

class ConcreteDecoratorB : public Decorator {
  public:
    ConcreteDecoratorB(Component *ptrComponent);
    virtual ~ConcreteDecoratorB();

    virtual void addBehavior();
    virtual void operation() override;
};

#endif  // CONCRETEDECORATORB_H
