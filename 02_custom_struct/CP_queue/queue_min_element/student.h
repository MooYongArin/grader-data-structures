#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <vector>

template <typename T>
template <typename Comp>
T CP::queue<T>::min_element(std::vector<size_t> pos, Comp comp) const
{
  // your code here
  T min;
  bool found = false;

  for (auto &i : pos)
  {
    if (i < this->size())
    {
      if (!found)
      {
        min = mData[(mFront + i) % mCap];
        found = true;
      }
      else
      {
        if (comp(mData[(mFront + i) % mCap], min))
        {
          min = mData[(mFront + i) % mCap];
        }
      }
    }
  }

  // should return something
  return min;
}

#endif
