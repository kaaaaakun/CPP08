#include "Span.hpp"

#include <stdexcept>

Span::Span(unsigned int n) : n_(n) {}
Span::Span(Span const &other) : vec_(other.vec_), n_(other.n_) {}
Span::~Span() {}
Span &Span::operator=(Span const &other) {
  if (this != &other) {
    this->vec_ = other.vec_;
    this->n_ = other.n_;
  }
  return *this;
}

void Span::addNumber(int addNum) {
  if (vec_.size() == n_)
    throw std::range_error("Error: The number of elements is full.");
  else
    vec_.push_back(addNum);
}

unsigned long Span::getAbs(long a, long b) {
  if (a < b)
    return b - a;
  else
    return a - b;
}

unsigned long Span::shortestSpan() {
  if (vec_.size() < 2) {
    throw std::range_error("Error: The number of elements is not enough.");
  }
  long beforeNum = vec_[1];
  unsigned long currentDiff;
  unsigned long diff = getAbs(vec_[0], vec_[1]);
  for (unsigned int i = 2; i < vec_.size(); i++) {
    currentDiff = getAbs(beforeNum, static_cast<long>(vec_[i]));
    if (diff > currentDiff) diff = currentDiff;
    beforeNum = vec_[i];
  }
  return diff;
}

unsigned long Span::longestSpan() {
  if (vec_.size() < 2) {
    throw std::range_error("Error: The number of elements is not enough.");
  }
  long beforeNum = vec_[1];
  unsigned long currentDiff;
  unsigned long diff = getAbs(vec_[0], vec_[1]);
  for (unsigned int i = 2; i < vec_.size(); i++) {
    currentDiff = getAbs(beforeNum, static_cast<long>(vec_[i]));
    if (diff < currentDiff) diff = currentDiff;
    beforeNum = vec_[i];
  }
  return diff;
}
