#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "stack.h"

template <typename T>
void CP::stack<T>::reverse(size_t first, size_t last){
	// write your code here
	if (first > last)
	{
		return;
	}
	if (last >= mSize)
	{
		last = mSize - 1;
	}
	
	
	int count = 0;
	for (size_t i = first; i < (last + first)/2 + (last + first)%2; i++)
	{
		std::swap(mData[mSize - 1 - i], mData[mSize - 1 - last + count]);
		count++;
	}
	

}

#endif
