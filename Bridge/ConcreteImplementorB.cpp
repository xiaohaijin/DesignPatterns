#include <iostream>

#include "ConcreteImplementorB.h"

ConcreteImplementorB::ConcreteImplementorB() {
}

ConcreteImplementorB::~ConcreteImplementorB() {
}

void ConcreteImplementorB::operationImp() {
  std::cout << "Imp in ConcreteImplementorB style." << std::endl;
}
