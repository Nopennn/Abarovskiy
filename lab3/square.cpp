#include "square.h"

Square::Square() : a_(0, 0), b_(0, 0), c_(0, 0), d_(0, 0) {}

Square::Square(const Square &square) {
  this->a_ = square.a_;
  this->b_ = square.b_;
  this->c_ = square.c_;
  this->d_ = square.d_;
}

Square::Square(std::istream &is) {
  std::cin >> a_ >> b_ >> c_ >> d_;
}

size_t Square::VertexesNumber() {
  return (size_t)4;
}

double Square::Area() {
  double a = a_.dist(b_);
  return a * a;
}

void Square::Print(std::ostream &os) {
  std::cout << "Square " << a_ << b_ << c_ << d_ << std::endl;
}