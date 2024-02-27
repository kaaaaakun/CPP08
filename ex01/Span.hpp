#ifndef SPAWN_SPAN_HPP
#define SPAWN_SPAN_HPP

#include <iostream>
#include <vector>

class Span {
 private:
  std::vector<int> vec_;
  unsigned int n_;

  unsigned long getAbs(long a, long b);

 public:
  Span(unsigned int n);
  Span(Span const &other);
  ~Span();
  Span &operator=(Span const &other);

  unsigned long shortestSpan();
  unsigned long longestSpan();
  void addNumber(int addNum);
};

#endif  // SPAWN_SPAN_HPP
