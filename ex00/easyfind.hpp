#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>
#include <iostream>
#include <list>
#include <stdexcept>
#include <vector>

template <typename T>
typename T::iterator Easyfind(T &container, int value) {
  return (std::find(container.begin(), container.end(), value));
}

#endif  // EASYFIND_HPP
