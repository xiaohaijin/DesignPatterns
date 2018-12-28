#ifndef CONCRETECOMPONENT_H
#define CONCRETECOMPONENT_H

#include "Component.h"

class ConcreteComponent : public Component {
  public:
    ConcreteComponent();
    virtual ~ConcreteComponent();

    virtual void operation() override;
};

#endif  // CONCRETECOMPONENT_H
