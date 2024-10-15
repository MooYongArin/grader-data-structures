#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror()
{
  // write your code here
  ensureCapacity(2 * mSize);
  for (size_t i = 0; i < mSize; i++)
  {
    mData[mSize + i] = mData[mSize - 1 - i];
  }

  mSize *= 2;
}

#endif

