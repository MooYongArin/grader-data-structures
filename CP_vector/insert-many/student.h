#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <algorithm>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int, T>> data)
{
  // write your code here
  int added_size = 0;
  int current_index = 0;
  CP::vector<T> temp;
  sort(data.begin(), data.end());
  for (const auto &i : data)
  {
    while (current_index != i.first && current_index != this->size())
    {
      temp.push_back(this->at(current_index));
      current_index++;
    }
    temp.push_back(i.second);
    added_size++;
  }
  while (current_index != this->size())
  {
    temp.push_back(this->at(current_index));
    current_index++;
  }
  this->operator=(temp);
}

#endif
