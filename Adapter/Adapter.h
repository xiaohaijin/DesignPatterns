#ifndef ADAPTER_H
#define ADAPTER_H

#include "Target.h"

class Adaptee;

class Adapter : public Target {
 public:
  Adapter(Adaptee* adaptee);
  virtual ~Adapter();

  virtual void request() override;

 private:
  Adaptee* m_pAdaptee;
};

#endif  // ADAPTER_H
