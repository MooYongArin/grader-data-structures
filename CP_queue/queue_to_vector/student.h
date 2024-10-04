#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const
{
  std::vector<T> res;
  // write your code only here
  int i = 0;
  while (!this->empty() && i != k)
  {
    res.push_back(mData[(mFront + i )% mCap]);
    i++;
  }
  
  //
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from, iterator to)
{
  // write your code only here
  mData = new T[to - from]();
  mCap = to - from;
  mSize = to - from;
  mFront = 0;
  
  int i = 0;
  while (from != to)
  {
    mData[i] = *from;
    from++;
    i++;
  }
}

#endif

// int cap = 1;
//   mData = new T[cap]();
//   mCap = cap;
//   mSize = 0;
//   mFront = 0;

//   while (from != to) {
//     push(*from);
// //     from++;
//   }
