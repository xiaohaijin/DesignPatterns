#include "concretefactory.h"
#include "producta.h"
#include "productb.h"

ConcreteFactory::ConcreteFactory() {
}

AbstractProduct *ConcreteFactory::createProductA() {
  return new ProductA();
}

AbstractProduct *ConcreteFactory::createProductB() {
  return new ProductB();
}
