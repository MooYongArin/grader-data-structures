#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
int CP::priority_queue<T, Comp>::height() const
{
  // write your code here
  if (mSize == 0)
  {
    return -1;
  }
  int tmp = 1;
  int count = 0;
  while (tmp <= mSize)
  {
    tmp *= 2;
    count++;
  }
  return count - 1;
  
}

#endif
