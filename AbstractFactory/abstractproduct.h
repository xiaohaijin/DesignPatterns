#ifndef ABSTRACTPRODUCT_H
#define ABSTRACTPRODUCT_H

class AbstractProduct {
 public:
  AbstractProduct();
  virtual ~AbstractProduct();
  virtual void Operation() = 0;
};

#endif  // ABSTRACTPRODUCT_H
