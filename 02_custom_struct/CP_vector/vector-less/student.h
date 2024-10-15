#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const
{
  // write your code here
  //  if you use std::vector, your score will be half (grader will report score BEFORE halving)
  for (size_t i = 0; i < std::min(this->size(), other.size()); i++)
  {
    if (mData[i] < other.mData[i])
    {
      return true;
    }
    if (mData[i] > other.mData[i])
    {
      return false;
    }
  }

  return this->size() < other.size();

  if ((this->size() >= 1 && other.size() >= 1) && (mData[0] == other.mData[0]))
  {
    for (size_t i = 0; i < std::min(this->size(), other.size()); i++)
    {
      if (mData[i] < other.mData[i])
      {
        return true;
      }
      if (mData[i] > other.mData[i])
      {
        return false;
      }
    }

    return this->size() < other.size();
  }
}

#endif
