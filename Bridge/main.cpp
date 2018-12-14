#include "ConcreteImplementorA.h"
#include "ConcreteImplementorB.h"
#include "RedefinedAbstraction.h"

int main(int argc, char **argv) {
  Implementor *pImpA = new ConcreteImplementorA;
  Implementor *pImpB = new ConcreteImplementorB;
  Abstraction *pa = new RedefinedAbstraction(pImpA);
  Abstraction *pb = new RedefinedAbstraction(pImpB);

  pa->operation();
  pb->operation();

  delete pa;
  delete pb;

  return 0;
}
