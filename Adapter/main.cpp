#include "Adaptee.h"
#include "Adapter.h"
#include "Target.h"

int main(int argc, char **argv) {
  Adaptee *adaptee = new Adaptee;
  Target *tar = new Adapter(adaptee);
  tar->request();

  return 0;
}
