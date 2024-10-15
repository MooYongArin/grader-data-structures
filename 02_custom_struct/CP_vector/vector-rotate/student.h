#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k)
{
  // write your code here
  if (first == last || k == 0 || first + 1 == last || k == first - last)
  {
    return;
  }
  vector<T> overflow;
  int pos_f = first - begin();
  int pos_l = last - begin();
  for (size_t i = pos_f; i < pos_f + k; i++)
  {
    overflow.push_back(mData[i]);
  }
  
  for (size_t i = pos_f; i < pos_l - k; i++)
  {
    mData[i] = mData[i+k];
  }
  int count = 0;
  for (size_t i = pos_l - k; i < pos_l; i++)
  {
    mData[i] = overflow[count];
    count++;
  }
  
}

#endif

