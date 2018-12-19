#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component {
 public:
  Component(const std::string name);
  virtual ~Component();

  virtual void add(const Component *cmpt) = 0;
  virtual void remove(const Component *cmpt) = 0;
  virtual Component *getChild(int index) = 0;
  virtual void operation(int index) = 0;

 private:
  Component();

 private:
  std::string strName;
};

#endif  // COMPONENT_H
