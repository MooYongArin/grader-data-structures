#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::operator==(const CP::priority_queue<T,Comp> &other) const {

  //write your code here
  if (mSize != other.size())
  {
    return false;
  }
  std::vector<T> v1(mSize), v2(other.size());
  for (size_t i = 0; i < mSize; i++)
  {
    v1[i] = mData[i];
    v2[i] = other.mData[i];
  }
  std::sort(v1.begin(), v1.end(), mLess);
  std::sort(v2.begin(), v2.end(), other.mLess);
  
  return v1 == v2; // you can change this line
}

#endif
