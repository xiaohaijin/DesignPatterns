#include "ConcreteDecoratorA.h"
#include <iostream>

ConcreteDecoratorA::ConcreteDecoratorA(Component *ptrComponent) : Decorator(ptrComponent) {
}

ConcreteDecoratorA::~ConcreteDecoratorA() {
}

void ConcreteDecoratorA::addBehavior() {
    std::cout << "addBehavior AAAA" << std::endl;
}

void ConcreteDecoratorA::operation() {
    Decorator::operation();
    addBehavior();
}
