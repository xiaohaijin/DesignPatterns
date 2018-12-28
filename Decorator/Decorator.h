#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"

class Decorator : public Component {
  public:
    Decorator(Component *ptrComponent);
    virtual ~Decorator();

    virtual void operation() override;

  private:
    Component *ptrComponent;
};

#endif  // DECORATOR_H
