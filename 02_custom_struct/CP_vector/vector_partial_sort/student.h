#ifndef __STUDENT_H_
#define __STUDENT_H_

// can include anything
#include <algorithm>

template <typename T>
template <typename CompareT>
void CP::vector<T>::partial_sort(std::vector<iterator> &pos, CompareT comp)
{
  // Write code here
  // you can compare two data A and B of type T by calling comp(A,B)
  // which return true when A is less than B
  sort(pos.begin(), pos.end());
  CP::vector<T> tmp;
  for (auto &i : pos)
  {
    tmp.push_back(*i);
  }
  sort(tmp.begin(), tmp.end(), comp);
  int idx = 0;
  for (auto &i : pos)
  {
    *i = tmp[idx];
    idx++;
  }
  
}

#endif
