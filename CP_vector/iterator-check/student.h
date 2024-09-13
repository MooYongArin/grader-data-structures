#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::valid_iterator(CP::vector<T>::iterator it) const
{
  // write your code here
  if (it >= mData && it < mData + size()) {
    return true; 
  } else {
    return false; 
  }
}

#endif
