#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T &value, iterator a, iterator b, CP::list<T> &output)
{
  // write your code here
  if (a == b || mSize == 0)
  {
    return;
  }
  int erased = 0;
  while (a != b)
  {
    if (*a == value)
    {
      iterator tmp(a.ptr->next);
      a.ptr->prev->next = a.ptr->next;
      a.ptr->next->prev = a.ptr->prev;
      delete a.ptr;
      mSize--;
      a = tmp;
      erased++;
    }
    else
    {
      a++;
    }
  }
  for (int i = 0; i < erased; i++)
  {
    auto it = output.begin();
    node *tmp = new node(value, it.ptr->prev, it.ptr);
    it.ptr->prev->next = tmp;
    it.ptr->prev = tmp;
    output.mSize++;
  }
}

#endif
