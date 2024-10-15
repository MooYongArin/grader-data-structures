#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    stack<T> temp1; // collect from top to before first copy
    stack<T> temp2; // all copy
    for (size_t i = 0; i < a; i++)
    {
        temp1.push(top());
        pop();
    }
    for (size_t i = a; i <= b; i++)
    {
        temp2.push(top());
        pop();
    }
    while (!temp2.empty())
    {
        push(temp2.top());
        push(temp2.top());
        temp2.pop();
    }
    while (!temp1.empty())
    {
        push(temp1.top());
        temp1.pop();
    }
    // int range = b - a + 1;
    // T *arr = new T[mSize + range]();
    // if (mSize + range > mCap)
    // {
    //     expand(std::max(mCap * 2, mSize+range));
    // }
    // int current_index = 0;
    // for (size_t i = 0; i < this->size() - b - 1; i++)
    // {
    //     arr[current_index] = mData[i];
    //     current_index++;
    // }
    // int m_idx = this->size() - b - 1;
    // ;
    // while (b != a - 1)
    // {
    //     arr[current_index] = mData[m_idx];
    //     arr[current_index + 1] = mData[m_idx];
    //     current_index += 2;
    //     m_idx++;
    //     b--;
    // }
    // while (m_idx != this->size())
    // {
    //     arr[current_index] = mData[m_idx];
    //     current_index++;
    //     m_idx++;
    // }

    // delete[] mData;
    // mData = arr;
    // mSize += range;
}

#endif