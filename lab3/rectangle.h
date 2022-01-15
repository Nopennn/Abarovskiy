#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "figure.h"

class Rectangle : public Figure {
 private:
  Point a_, b_, c_, d_;

 public:
  Rectangle();
  Rectangle(const Rectangle &rectangle);
  Rectangle(std::istream &is);
  size_t VertexesNumber();
  double Area();
  void Print(std::ostream &os);

};

#endif //RECTANGLE_H