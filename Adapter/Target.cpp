#include <iostream>

#include "Target.h"

Target::Target() {
}

Target::~Target() {
}

void Target::request() {
  std::cout << "this is original request" << std::endl;
}
