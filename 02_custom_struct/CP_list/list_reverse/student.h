#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b)
{
  // write your code here
  if (a == b || mSize == 0) return a;
  auto it = a;
  while (a != b) {
    if (a == --b) break;
    std::swap(*a, *b);
    a++;
  }
  return it;
  
}

#endif
