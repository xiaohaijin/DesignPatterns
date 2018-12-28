#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"

int main(int argc, char *argv[]) {
    ConcreteComponent *ptrConcreteComponent = new ConcreteComponent;

    Component *ptrA = new ConcreteDecoratorA(ptrConcreteComponent);
    ptrA->operation();

    Component *ptrB = new ConcreteDecoratorB(ptrConcreteComponent);
    ptrB->operation();

    delete ptrB;
    delete ptrA;
    delete ptrConcreteComponent;
    return 0;
}
