#include <iostream>

#include "Product.h"

Product::Product() {
}

Product::~Product() {
}

void Product::setA(const std::string &str) {
  m_a = str;
}

void Product::setB(const std::string &str) {
  m_b = str;
}

void Product::setC(const std::string &str) {
  m_c = str;
}

void Product::show() {
  std::cout << "product has " << m_a << " " << m_b << " " << m_c << std::endl;
}
