#include <iostream>
#include <list>

#include "MutantStack.hpp"

void defaultTest() {
  std::cout << "---- Default test ----" << std::endl;

  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);
}

void defaultConstTest() {
  std::cout << "---- Const test ----" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int> mstack2(mstack);
  MutantStack<int>::iterator it = mstack2.begin();
  MutantStack<int>::iterator ite = mstack2.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack2);
}

void listTest() {
  std::cout << "---- List test ----" << std::endl;

  std::list<int> mlist;
  mlist.push_back(5);
  mlist.push_back(17);
  std::cout << mlist.back() << std::endl;
  mlist.pop_back();
  std::cout << mlist.size() << std::endl;
  mlist.push_back(3);
  mlist.push_back(5);
  mlist.push_back(737);
  mlist.push_back(0);
  std::list<int>::iterator it = mlist.begin();
  std::list<int>::iterator ite = mlist.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::list<int> s(mlist);
}

int main() {
  defaultTest();
  listTest();
  defaultConstTest();
  return 0;
}
