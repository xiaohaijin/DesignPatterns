#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "Component.h"
#include "Decorator.h"

class ConcreteDecoratorA : public Decorator {
  public:
    ConcreteDecoratorA(Component *ptrComponent);
    virtual ~ConcreteDecoratorA();

    virtual void addBehavior();
    virtual void operation() override;
};

#endif  // CONCRETEDECORATORA_H
