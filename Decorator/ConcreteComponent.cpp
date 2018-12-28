#include <iostream>

#include "ConcreteComponent.h"

ConcreteComponent::ConcreteComponent() {
}

ConcreteComponent::~ConcreteComponent() {
}

void ConcreteComponent::operation() {
    std::cout << "ConcreteCompent's normal operation!" << std::endl;
}
