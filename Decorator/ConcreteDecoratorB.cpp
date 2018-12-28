#include "ConcreteDecoratorB.h"
#include <iostream>

ConcreteDecoratorB::ConcreteDecoratorB(Component *ptrComponent) : Decorator(ptrComponent) {
}

ConcreteDecoratorB::~ConcreteDecoratorB() {
}

void ConcreteDecoratorB::addBehavior() {
    std::cout << "addBehavior BBBB" << std::endl;
}

void ConcreteDecoratorB::operation() {
    Decorator::operation();
    addBehavior();
}
