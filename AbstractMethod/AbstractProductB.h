#ifndef ABSTRACTPRODUCTB_H
#define ABSTRACTPRODUCTB_H

class AbstractProductB {
 public:
  AbstractProductB();
  virtual ~AbstractProductB();

  virtual void eat() = 0;
};

#endif  // ABSTRACTPRODUCTB_H
