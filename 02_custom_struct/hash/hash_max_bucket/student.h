#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename HasherT,
          typename EqualT>
size_t CP::unordered_map<KeyT, MappedT, HasherT, EqualT>::max_bucket_length()
{
    // your code here
    size_t max = mBuckets[0].size();
    for (size_t i = 0; i < bucket_count(); i++)
        if (mBuckets[i].size() > max) max = mBuckets[i].size();
    return max;
}

#endif
