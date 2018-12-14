#ifndef TARGET_H
#define TARGET_H

class Target {
 public:
  Target();
  virtual ~Target();

  virtual void request();
};

#endif  // TARGET_H
