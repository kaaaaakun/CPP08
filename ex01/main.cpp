#include "Span.hpp"

void defauletTest() {
  Span sp = Span(5);
  sp.addNumber(6);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
  std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;
}

void maxValueTest() {
  std::cout << "-⚫︎span 5, add 3 numbers: 2147483647, -2147483648, 0"
            << std::endl;
  try {
    Span sp = Span(5);
    sp.addNumber(2147483647);
    sp.addNumber(-2147483648);
    sp.addNumber(0);
    std::cout << "shortestSpan : " << sp.shortestSpan() << std::endl;
    std::cout << "longestSpan  : " << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void throwTestTooEnoughtSpan() {
  std::cout << "-⚫︎span 5, add 10 numbers: 0-9" << std::endl;
  try {
    Span sp = Span(5);
    for (int i = 0; i < 10; i++) {
      sp.addNumber(i);
      std::cout << "count: " << i << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

void throwTestNotEnoughtspan() {
  std::cout << "-⚫︎span 5, add 1 numbers: 0" << std::endl;
  Span sp = Span(5);
  try {
    for (int i = 0; i < 1; i++) {
      sp.addNumber(i);
      std::cout << "count: " << i << std::endl;
    }
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << "-- longestSpan and shortestSpan" << std::endl;
  try {
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  try {
    std::cout << sp.shortestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int main(void) {
  try {
    defauletTest();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  maxValueTest();
  std::cout << "----- Throw test -----" << std::endl;
  throwTestTooEnoughtSpan();
  throwTestNotEnoughtspan();
  return 0;
}
