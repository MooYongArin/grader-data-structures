#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k, CP::stack<T> &s2, int m)
{
  // your code here
  CP::stack<T> temp;
  CP::stack<T> res;
  while (m-- && !s2.empty())
  {
    temp.push(s2.top());
    s2.pop();
  }
  for (size_t i = 0; i < this->size() - k; i++)
  {
    res.push(mData[i]);
  }
  while (!temp.empty())
  {
    res.push(temp.top());
    temp.pop();
  }
  
  for (size_t i = this->size() - k; i < this->size(); i++)
  {
    res.push(mData[i]);
  }
  
  *this = std::move(res);
}
#endif
