#ifndef DIRECTOR_H
#define DIRECTOR_H

class Builder;
class Product;

class Director {
 public:
  Director();
  virtual ~Director();

  Product *construct();
  void setBuilder(Builder *builder);

 private:
  Builder *m_pbuilder;
};

#endif  // DIRECTOR_H
