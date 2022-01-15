#include "triangle.h"
#include <math.h>

Triangle::Triangle() : a_(0, 0), b_(0, 0), c_(0, 0) {}

Triangle::Triangle(const Triangle &triangle) {
  this->a_ = triangle.a_;
  this->b_ = triangle.b_;
  this->c_ = triangle.c_;
}

Triangle::Triangle(std::istream &is) {
  std::cin >> a_ >> b_ >> c_;
}

size_t Triangle::VertexesNumber() {
  return 3;
}

double Triangle::Area() {
  double a = a_.dist(b_);
  double b = b_.dist(c_);
  double c = c_.dist(a_);
  double p = (a + b + c) / 2;
  return sqrt(p * (p - a) * (p - b) * (p - c));
}

void Triangle::Print(std::ostream &os) {
  std::cout << "Triangle " << a_ << b_ << c_ << std::endl;
}
