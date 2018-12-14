#include <iostream>

#include "RedefinedAbstraction.h"

RedefinedAbstraction::RedefinedAbstraction() {
}

RedefinedAbstraction::RedefinedAbstraction(Implementor *imp) : Abstraction(imp) {
}

RedefinedAbstraction::~RedefinedAbstraction() {
}

void RedefinedAbstraction::operation() {
  std::cout << "do something" << std::endl;
  m_pImp->operationImp();
}
