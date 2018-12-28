#include "Decorator.h"

Decorator::Decorator(Component *ptrComponent) {
    this->ptrComponent = ptrComponent;
}

Decorator::~Decorator() {
}

void Decorator::operation() {
    ptrComponent->operation();
}
