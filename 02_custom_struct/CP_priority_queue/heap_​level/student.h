#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T, typename Comp>
std::vector<T> CP::priority_queue<T, Comp>::at_level(size_t k) const
{
  // write your code here
  // can include anything
  std::vector<T> r;
  int start = 0, i = 0;
  while (i < k)
  {
    start += pow(2,i);
    i++;
  }
  int end = 2*start;
  if (mSize - 1 < 2*start)
  {
    end = mSize - 1;
  }
  // std::cout << start << " " << end << std::endl;
  
  for (size_t i = start; i <= end; i++)
  {
    r.push_back(mData[i]);
  }
  
  sort(r.begin(), r.end(), mLess);
  std::reverse(r.begin(), r.end());
  return r;
}

#endif
