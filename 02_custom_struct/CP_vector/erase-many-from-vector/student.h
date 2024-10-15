#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos)
{
  // write your code here
  T *arr = new T[mSize - pos.size()]();
  int current_index = 0;
  int mDataSkip = 0; 

  for (int i = 0; i < mSize; ++i)
  {
    if (mDataSkip < pos.size() && i == pos[mDataSkip])
    {
      mDataSkip++;
    }
    else
    {
      arr[current_index] = mData[i];
      current_index++;
    }
  }

  delete[] mData;
  mData = arr;
  mCap = current_index;
  mSize -= pos.size();
}

#endif
