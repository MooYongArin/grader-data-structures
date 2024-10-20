#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "priority_queue.h"
#include <iostream>

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixUp(size_t idx)
{
    T tmp = mData[idx];
    while (idx > 0)
    {
        size_t p = (idx-1) / 4;
        if (mLess(tmp, mData[p]))
            break;
        mData[idx] = mData[p];
        idx = p;
    }
    mData[idx] = tmp;
}

template <typename T, typename Comp>
void CP::priority_queue<T, Comp>::fixDown(size_t idx)
{
    T tmp = mData[idx];
    size_t c;
    while ((c = 4 * idx + 1) < mSize)
    {
        size_t idx_max = c;
        T max = mData[c];
        if (c + 1 < mSize && mLess(max, mData[c + 1])){
            max = mData[c+1];
            idx_max = c+1;
        }
        if (c + 2 < mSize && mLess(max, mData[c + 2])){
            max = mData[c+2];
            idx_max = c+2;
        }
        if (c + 3 < mSize && mLess(max, mData[c + 3])){
            max = mData[c+3];
            idx_max = c+3;
        }
        if (mLess(max, tmp))
            break;
        mData[idx] = max;
        idx = idx_max;
    }
    mData[idx] = tmp;
}

#endif
