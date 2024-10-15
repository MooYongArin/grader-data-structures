#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "stack.h"

template <typename T>
void CP::stack<T>::v_split(std::vector<std::stack<T>> &output, size_t k) const
{
  // Write code here
  int reminder = this->size()%k;
  int divide = this->size()/k;
  int a = 0;
  for (size_t i = 0; i < k; i++)
  {
    std::stack<T> s;
    std::stack<T> rev;
    for (size_t j = 0; j < divide; j++)
    {
      s.push(mData[mSize - a - 1]);
      a++;
    }
    if (reminder != 0)
    {
      s.push(mData[mSize - a - 1]);
      reminder--;
      a++;
    }
    while (!s.empty())
    {
      rev.push(s.top());
      s.pop();
    }
    
    output.push_back(rev);
    
  }
  
}

#endif
