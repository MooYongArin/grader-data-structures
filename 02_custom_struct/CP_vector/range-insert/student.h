#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::insert(iterator position, iterator first, iterator last)
{
  // write your code here
  CP::vector<T> temp;
  int current_index = 0;
  while (current_index != position - this->begin())
  {
    temp.push_back(this->at(current_index));
    current_index++;
  }
  for (auto it = first; it < last; it++)
  {
    temp.push_back(*it);
  }
  while (current_index != this->size())
  {
    temp.push_back(this->at(current_index));
    current_index++;
  }
  this->operator=(temp);
}

#endif
