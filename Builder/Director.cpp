#include "Director.h"
#include "Builder.h"

Director::Director() {
}

Director::~Director() {
}

Product *Director::construct() {
  m_pbuilder->buildPartA();
  m_pbuilder->buildPartB();
  m_pbuilder->buildPartC();

  return m_pbuilder->getResult();
}

void Director::setBuilder(Builder *builder) {
  m_pbuilder = builder;
}
