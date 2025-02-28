#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::find(T k) const
{
  // your code here
  for (size_t i = 0; i < mSize; i++)
  {
    if (mData[i] == k)
    {
      return true;
    }
  }
  return false;
}

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::find_level(T k) const
{
  // your code here
  if (!this->find(k))
  {
    return -1;
  }
  for (size_t i = mSize - 1; i >= 0; i--)
  {
    if (mData[i] == k)
    {
      int count = 0;
      // std::cout << i;
      while (i != 0)
      {
        i--;
        i /= 2;
        count++;
      }
      return count;
    }
  }
  return -1;
}

#endif
