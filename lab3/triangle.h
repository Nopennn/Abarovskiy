#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "figure.h"

class Triangle : public Figure {
 private:
  Point a_, b_, c_;
 public:
  Triangle();
  Triangle(const Triangle &triangle);
  Triangle(std::istream &is);
  size_t VertexesNumber();
  double Area();
  void Print(std::ostream &os);

};

#endif //TRIANGLE_H
