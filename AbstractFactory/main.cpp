#include "concretefactory.h"

int main(int argc, char **argv) {
  AbstractFactory *factory = new ConcreteFactory();
  AbstractProduct *productA = factory->createProductA();
  AbstractProduct *productB = factory->createProductB();
  productA->Operation();
  productB->Operation();

  delete factory;
  delete productA;
  delete productB;

  return 0;
}
