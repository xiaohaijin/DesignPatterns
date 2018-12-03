#ifndef PRODUCTA_H
#define PRODUCTA_H

#include <iostream>

#include "abstractproduct.h"

class ProductA : public AbstractProduct {
 public:
  ProductA();

  virtual void Operation() override;
};

#endif  // PRODUCTA_H
