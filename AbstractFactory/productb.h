#ifndef PRODUCTB_H
#define PRODUCTB_H

#include <iostream>

#include "abstractproduct.h"

class ProductB : public AbstractProduct {
 public:
  ProductB();

  virtual void Operation() override;
};

#endif  // PRODUCTB_H
