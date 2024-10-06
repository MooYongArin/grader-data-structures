#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::split_stack(int k) const
{
  // your code here
  std::vector<std::vector<T>> res(k);
  for (size_t i = 0; i < k; i++)
  {
    int n = 0;
    CP::stack<T> s;
    while (mSize - 1 - (i + (n * k)) <= this->size())
    {
      s.push(mData[mSize - 1 - (i + (n * k))]);
      n++;
    }
    while (!s.empty())
    {
      res[i].push_back(s.top());
      s.pop();
    }
  }

  return res;
  // should return something
}

#endif
