#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>
#include "queue.h"

template <typename T>
void CP::queue<T>::v_split(std::vector<std::queue<T>> &output, size_t k) const
{
  // your code here
  int divide = this->size() / k;
  int reminder = this->size() % k;
  int a = 0;
  for (size_t i = 0; i < k; i++)
  {
    std::queue<T> q;
    for (size_t j = 0; j < divide; j++)
    {
      q.push(mData[(mFront + a) % mCap]);
      a++;
    }
    if (reminder != 0)
    {
      q.push(mData[(mFront + a) % mCap]);
      a++;
      reminder--;
    }
    output.push_back(q);
  }
}

#endif
