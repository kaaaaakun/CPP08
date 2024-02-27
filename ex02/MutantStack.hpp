#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <class Elem>
class MutantStack : public std::stack<Elem, std::deque<Elem> > {
 public:
  // canonical form
  MutantStack() {}
  MutantStack(MutantStack const &other) : std::stack<Elem>(other) {}
  virtual ~MutantStack() {}
  MutantStack &operator=(MutantStack const &other) {
    if (this != &other) {
      std::stack<Elem>::operator=(other);
    }
    return *this;
  }

  // ---- begin and end and iterator ----
  // iterator
  typedef typename std::deque<Elem>::iterator iterator;
  iterator begin() { return (std::stack<Elem>::c.begin()); }
  iterator end() { return (std::stack<Elem>::c.end()); }

  // const
  typedef typename std::deque<Elem>::const_iterator const_iterator;
  const_iterator begin() const { return (std::stack<Elem>::c.begin()); }
  const_iterator end() const { return (std::stack<Elem>::c.end()); }

  // reverse iterator
  typedef typename std::deque<Elem>::reverse_iterator
      reverse_iterator;
  reverse_iterator rbegin() { return (std::stack<Elem>::c.rbegin()); }
  reverse_iterator rend() { return (std::stack<Elem>::c.rend()); }

  // const reverse iterator
  typedef typename std::deque<Elem>::const_reverse_iterator 
      const_reverse_iterator;
  const_reverse_iterator rbegin() const {
    return (std::stack<Elem>::c.rbegin());
  }
  const_reverse_iterator rend() const { return (std::stack<Elem>::c.rend()); }
};

#endif
