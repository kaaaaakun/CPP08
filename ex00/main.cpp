#include <deque>

#include "easyfind.hpp"

int main(void) {
  // vectorの場合
  std::vector<int> vec;
  for (int i = 0; i < 5; i++) {
    vec.push_back(i);
  }
  try {
    std::vector<int>::iterator itr = easyfind(vec, 3);
    std::cout << *itr << std::endl;  // イテレータを解除して値を表示
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::vector<int>::iterator itr = easyfind(vec, 7);
    std::cout << *itr << std::endl;  // イテレータを解除して値を表示
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // listの場合
  std::list<int> list;
  for (int i = 0; i < 5; i++) {
    list.push_back(i);  // リストに要素を追加
  }
  try {
    std::list<int>::iterator itr = easyfind(list, 3);
    std::cout << *itr << std::endl;  // イテレータを解除して値を表示
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::list<int>::iterator itr = easyfind(list, 6);
    std::cout << *itr << std::endl;  // イテレータを解除して値を表示
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  // dequeの場合
  std::deque<int> deq;
  for (int i = 0; i < 5; i++) {
    deq.push_back(i);
  }
  try {
    std::deque<int>::iterator itr = easyfind(deq, 3);
    std::cout << *itr << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    std::deque<int>::iterator itr = easyfind(deq, 10);
    std::cout << *itr << std::endl;
  } catch (const std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return 0;
}
