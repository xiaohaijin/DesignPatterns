#include <iostream>

#include "Leaf.h"

Leaf::Leaf(const std::string name) : Component(name) {
}

Leaf::~Leaf() {
}

void Leaf::add(const Component *cmpt) {
  std::cout << "Cant't add to a Leaf" << std::endl;
}

void Leaf::remove(const Component *cmpt) {
  std::cout << "Can't remove from a leaf" << std::endl;
}

Component *Leaf::getChild(int index) {
  std::cout << "Can't get child from a Leaf." << std::endl;
  return nullptr;
}

void Leaf::operation(int index) {
  std::string newStr(index, '-');
  std::cout << newStr;
}
