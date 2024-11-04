#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "queue.h"
template <typename T>
void CP::queue<T>::block_remove(size_t from, size_t to)
{
    // Write your code here
    size_t range = to - from + 1;

    if (from > mSize / 2)
    {
        while (from + range < mSize)
        {
            mData[(mFront + from) % mCap] = mData[(mFront + from + range) % mCap];
            from++;
        }
        mSize -= range;
    }
    else
    {
        while (to - range + 1 > 0)
        {
            mData[(mFront + to) % mCap] = mData[(mFront + to - range) % mCap];
            to--;
        }
        mFront = (mFront + range)%mCap;
        mSize -= range;
    }

    return;
}
#endif