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
        min = mData[i];
        found = true;
      }
      else
      {
        if (comp(mData[i], min))
        {
          min = mData[i];
        }
      }
    }
  }

  // should return something
  return min;
}

#endif
