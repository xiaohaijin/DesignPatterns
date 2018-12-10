#ifndef PRODUCTA1_H
#define PRODUCTA1_H

#include "AbstractProductA.h"

class ProductA1 : public AbstractProductA {
 public:
  ProductA1();
  virtual ~ProductA1();

  void use() override;
};

#endif  // PRODUCTA1_H
