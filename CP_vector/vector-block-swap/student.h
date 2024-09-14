#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m)
{
  // write your code here
  int pos_a = a - this->begin();
  int pos_b = b - this->begin();
  if (pos_b < 0 || pos_a < 0 || pos_a > this->size() || pos_a > this->size() || pos_a + m > this->size() || pos_b + m > this->size() || m <= 0)
  {
    return false;
  }
  if ((a > b && pos_b + m > pos_a) || (a < b && pos_a + m > pos_b))
  {
    return false;
  }
  if (a == b)
  {
    return false;
  }
  

  for (size_t i = 0; i < m; i++)
  {
    std::swap(*(a + i), *(b + i));
  }
  return true;
}

#endif
