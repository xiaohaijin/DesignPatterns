#ifndef LEAF_H
#define LEAF_H

#include "Component.h"

class Leaf : public Component {
 public:
  Leaf(const std::string name);
  virtual ~Leaf();

  virtual void add(const Component *cmpt) override;
  virtual void remove(const Component *cmpt) override;
  virtual Component *getChild(int index) override;
  virtual void operation(int index) override;

 private:
  Leaf();
};

#endif  // LEAF_H
