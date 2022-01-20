#include "rectangle.h"

Rectangle::Rectangle() : a_(0, 0), b_(0, 0), c_(0, 0), d_(0, 0) {}

Rectangle::Rectangle(const Rectangle &rectangle) {
  this->a_ = rectangle.a_;
  this->b_ = rectangle.b_;
  this->c_ = rectangle.c_;
  this->d_ = rectangle.d_;
}

Rectangle::Rectangle(std::istream &is) {
  std::cin >> a_ >> b_ >> c_ >> d_;
}

size_t Rectangle::VertexesNumber() {
  return 4;
}

double Rectangle::Area() {
  double a = a_.dist(b_);
  double b = b_.dist(c_);
  return a * b;
}

void Rectangle::Print(std::ostream &os) {
  std::cout << "Rectangle " << a_ << b_ << c_ << d_ << std::endl;
}