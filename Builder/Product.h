#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
 public:
  Product();
  virtual ~Product();

  void setA(const std::string &str);
  void setB(const std::string &str);
  void setC(const std::string &str);
  void show();

 private:
  std::string m_a;
  std::string m_b;
  std::string m_c;
};

#endif  // PRODUCT_H
