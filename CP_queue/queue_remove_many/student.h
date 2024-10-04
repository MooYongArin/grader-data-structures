#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <vector>
#include <algorithm>
#include "queue.h"

template <typename T>
void CP::queue<T>::remove_many(std::vector<size_t> pos)
{
  // your code here
  // std::vector<bool> deleted(mSize);
  // for (auto &i : pos)
  // {
  //   deleted[i] = true;
  // }
  
  sort(pos.begin(), pos.end());
  int idx = 0;
  int deleted = 0;
  for (auto &i : pos)
  {
    while (idx != i && idx != this->size() && idx + deleted != i)
    {
      mData[(mFront + idx)%mCap] = mData[(mFront + idx + deleted)%mCap];
      idx++;
    }
    deleted++;
  }
  while (idx != this->size())
  {
      
    mData[(mFront + idx)%mCap] = mData[(mFront + idx + deleted)%mCap];
    idx++;
  }
  
  mSize = this->size() - pos.size();
}

#endif
