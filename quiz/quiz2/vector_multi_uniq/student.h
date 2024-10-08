#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "vector.h"
#include <set>
#include <algorithm>

template <typename T>
void CP::vector<T>::uniq(std::vector<CP::vector<T>::iterator> itrs)
{
  // Write code here
  std::set<T> s;
  int idx = 0;
  int i = 0;
  int minus = 0;
  sort(itrs.begin(), itrs.end());
  for (auto &it : itrs)
  {
    while (i + begin() != it)
    {
      mData[idx] = mData[i];
      idx++;
      i++;
    }
    if (s.find(*it) == s.end())
    {
      mData[idx] = mData[i];
      s.insert(*it);
      idx++;
    }
    else
    {
      minus++;
    }

    i++;
  }
  mSize -= minus;
}

#endif
