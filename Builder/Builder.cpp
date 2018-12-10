#include "Builder.h"
#include "Product.h"

Builder::Builder() {
  m_prod = new Product();
}

Builder::~Builder() {
}

void Builder::buildPartA() {
}

void Builder::buildPartB() {
}

void Builder::buildPartC() {
}

Product *Builder::getResult() {
  return m_prod;
}
