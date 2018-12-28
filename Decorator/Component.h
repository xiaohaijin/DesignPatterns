#ifndef COMPONENT_H
#define COMPONENT_H

class Component {
  public:
    Component();
    virtual ~Component();

    virtual void operation();
};

#endif  // COMPONENT_H
