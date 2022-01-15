#ifndef SQUARE_H
#define SQUARE_H

#include "figure.h"

class Square : public Figure {
 private:
  Point a_, b_, c_, d_;
 public:
  Square();
  Square(const Square &square);
  Square(std::istream &is);
  size_t VertexesNumber();
  double Area();
  void Print(std::ostream &os);
};

#endif //SQUARE_H