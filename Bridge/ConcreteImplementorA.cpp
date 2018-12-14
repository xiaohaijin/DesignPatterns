#include <iostream>

#include "ConcreteImplementorA.h"

ConcreteImplementorA::ConcreteImplementorA() {
}

ConcreteImplementorA::~ConcreteImplementorA() {
}

void ConcreteImplementorA::operationImp() {
  std::cout << "Imp in ConcreteImplementora style." << std::endl;
}
