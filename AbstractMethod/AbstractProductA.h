#ifndef ABSTRACTPRODUCTA_H
#define ABSTRACTPRODUCTA_H

class AbstractProductA {
 public:
  AbstractProductA();
  virtual ~AbstractProductA();

  virtual void use() = 0;
};

#endif  // ABSTRACTPRODUCTA_H
