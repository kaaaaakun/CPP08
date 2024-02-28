#include <deque>

#include "easyfind.hpp"

void searchAndPrint(std::vector<int> &vec, int target) {
  std::cout << "Search " << target << " in vector: " << std::endl;
  std::vector<int>::const_iterator itr = Easyfind(vec, target);
  if (itr != vec.end())
    std::cout << "-> Found: " << *itr << std::endl;
  else
    std::cout << "-> Not Found" << std::endl;
}

void searchAndPrint(std::list<int> &list, int target) {
  std::cout << "Search " << target << " in List: " << std::endl;
  std::list<int>::const_iterator itr = Easyfind(list, target);
  if (itr != list.end())
    std::cout << "-> Found: " << *itr << std::endl;
  else
    std::cout << "-> Not Found" << std::endl;
}

void searchAndPrint(std::deque<int> &deq, int target) {
  std::cout << "Search " << target << " in Deque: " << std::endl;
  std::deque<int>::const_iterator itr = Easyfind(deq, target);
  if (itr != deq.end())
    std::cout << "-> Found: " << *itr << std::endl;
  else
    std::cout << "-> Not Found" << std::endl;
}

void vectorTest(void) {
  std::cout << "--- vector test ---" << std::endl;
  std::vector<int> vec;
  searchAndPrint(vec, 3);
  for (int i = 0; i < 5; i++) {
    vec.push_back(i);
  }
  searchAndPrint(vec, 3);
  searchAndPrint(vec, 4);
  searchAndPrint(vec, 5);

  std::cout << std::endl;
}

void listTest(void) {
  std::cout << "--- list test ---" << std::endl;
  std::list<int> list;
  searchAndPrint(list, 3);
  for (int i = 0; i < 5; i++) {
    list.push_back(i);
  }
  searchAndPrint(list, 3);
  searchAndPrint(list, 7);
  std::cout << std::endl;
}

void dequeTest(void) {
  std::cout << "--- deque test ---" << std::endl;
  std::deque<int> deq;
  searchAndPrint(deq, 3);
  for (int i = 0; i < 5; i++) {
    deq.push_back(i);
  }
  searchAndPrint(deq, 3);
  searchAndPrint(deq, 7);
  std::cout << std::endl;
}

int main(void) {
  vectorTest();
  listTest();
  dequeTest();
  return 0;
}
