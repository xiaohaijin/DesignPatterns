#include "ConcreteBuilder.h"
#include "Product.h"

ConcreteBuilder::ConcreteBuilder() {
}

ConcreteBuilder::~ConcreteBuilder() {
}

void ConcreteBuilder::buildPartA() {
  m_prod->setA("A Style");
}

void ConcreteBuilder::buildPartB() {
  m_prod->setB("B Style");
}

void ConcreteBuilder::buildPartC() {
  m_prod->setC("C Style");
}
