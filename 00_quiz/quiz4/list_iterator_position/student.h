#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "list.h"

template <typename T>
int CP::list<T>::data_iterator(CP::list<T>::iterator it)
{
  // Write code here
  iterator it1 = begin();
  int count = 0;
  while (it1 != end()) {
    if (it1 == it) return count;
    count++;
    it1++;
  }
  if (it1 == it) return -1;
  return -2;
}

#endif
