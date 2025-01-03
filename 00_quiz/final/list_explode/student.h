#ifndef __STUDENT_H_
#define __STUDENT_H_

// You can include library here
#include "list.h"
#include "vector.h"

template <typename T>
CP::vector<CP::list<T>> CP::list<T>::explode(){
    /*

        “Great results, can be achieved with small forces.”
        ― Sun Tzu, The Art of War 

    */
   CP::vector<CP::list<T>> result(mSize);
   int idx = 0;
   for (auto it = begin(); it != end();) {
        auto *tmp = it.ptr;
        it++;
        result[idx].mHeader->next = tmp;
        result[idx].mHeader->prev = tmp;
        tmp->next = result[idx].mHeader;
        tmp->prev = result[idx].mHeader;
        result[idx].mSize = 1;
        idx++;
   }
   mHeader->next = mHeader;
   mHeader->prev = mHeader;
   mSize = 0;
   return result;
}

#endif

