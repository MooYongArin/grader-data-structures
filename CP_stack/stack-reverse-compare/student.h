#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
int CP::stack<T>::compare_reserve(const CP::stack<T> &other) const
{
    // write your code here
    int reserve = mCap - mSize;
    int other_reserver = other.mCap - other.mSize;
    if (reserve < other_reserver)
    {
        return -1;
    } else if (reserve == other_reserver)
    {
        return 0;
    } else {
        return 1;
    }
    
    
}

#endif
