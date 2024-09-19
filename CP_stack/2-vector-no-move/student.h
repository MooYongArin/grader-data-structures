#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T &CP::vector_no_move<T>::operator[](int idx)
{
  // your code here

  int first_index = std::upper_bound(aux.begin(), aux.end(), idx) - aux.begin();

  int second_idx = idx;
  if (first_index > 0)
  {
    second_idx = idx - aux[first_index - 1];
  }

  return mData[first_index][second_idx];
}

template <typename T>
void CP::vector_no_move<T>::expand_hook()
{
  // your code here
  // you MAY need this function
  int size = 0;
  aux.clear();
  for (auto &sub_array : mData)
  {
    size += sub_array.size();
    aux.push_back(size);
  }
}

#endif
