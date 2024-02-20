#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <list>
#include <stdexcept>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
  typename T::iterator itr =
      std::find(container.begin(), container.end(), value);
  if (itr != container.end()) return itr;
  throw std::invalid_argument("Value not found");
}

#endif  // EASYFIND_HPP
