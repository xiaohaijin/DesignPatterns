#include "Adaptee.h"
#include <iostream>

Adaptee::Adaptee() {
}

Adaptee::~Adaptee() {
}

void Adaptee::specficRequest() {
  std::cout << "specificRequest() this is real Request from Adaptee!" << std::endl;
}
