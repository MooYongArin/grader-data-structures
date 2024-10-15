#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <stack>

template <typename T>
void CP::stack<T>::multi_pop(size_t K)
{
  // write your code here
  if (this->size() < K)
  {
    mSize = 0;
  }
  else
  {
    int i = 0;
    while (i != K)
    {
      this->pop();
      i++;
    }
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K)
{
  // write your code here
  //
  std::stack<T> temp;
  std::stack<T> st;
  if (this->size() < K)
  {
    while (!this->empty())
    {
      temp.push(this->top());
      this->pop();
    }
  }
  else
  {
    int i = 0;
    while (i != K)
    {
      temp.push(this->top());
      this->pop();
      i++;
    }
  }
  while (!temp.empty())
    {
      st.push(temp.top());
      temp.pop();
    }
  return st;
  // don't forget to return an std::stack
}

#endif
