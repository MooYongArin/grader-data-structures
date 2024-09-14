#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>

// you can include any other file here
// you are allow to use any data structure

template <typename T>
void CP::vector<T>::uniq()
{
  // do someting here
  
  std::set<T> s;
  int repeated = 0;
  int size = 0;
  for (size_t i = 0; i < this->size(); i++)
  {
    /* code */
    if (s.find(mData[i]) != s.end())
    {
      repeated++;
      continue;
    } else {
      s.insert(mData[i]);
      mData[i - repeated] = mData[i];
      size++;
    }
    
  }
  
  mSize = size;
  mCap = size;
}

#endif
