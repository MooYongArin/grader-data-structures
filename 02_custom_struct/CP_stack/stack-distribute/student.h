#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const
{
  // write your code here
  std::vector<std::vector<T>> v_all(k);
  int overflow = this->size() % k;
  int range = this->size() / k;
  int count = 0;
  for (size_t i = 0; i < k; i++)
  {
    std::vector<T> v;
    for (size_t j = 0; j < range; j++)
    {
      v_all[i].push_back(mData[mSize - 1 - count]);
      count++;
    }
    if (overflow > 0)
    {
      v_all[i].push_back(mData[mSize - 1 - count]);
      count++;
      overflow--;
    }

  }
  return v_all;
}
#endif
