#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "unordered_map.h"

namespace CP {

template <typename KeyT,
          typename MappedT,
          typename HasherT,
          typename EqualT>
size_t CP::unordered_map<KeyT, MappedT, HasherT, EqualT>::next_cost(iterator it) {
    //Write code here

    if(it == end()) return 0;
    size_t count = 1;
    size_t bucketIdx = hash_to_bucket(it->first);
    ValueIterator it_find = find_in_bucket(mBuckets[bucketIdx],it->first);
    // std::cout << it->first << " ";
    // NOT FOUND
    if(it_find == mBuckets[bucketIdx].end()) return 0;
    ++it_find;
    if (it_find != mBuckets[bucketIdx].end()) return 1;

    bucketIdx++;
    
    // diff bucket
    while (bucketIdx != bucket_count() && bucket_size(bucketIdx) == 0)
    {
        count++;
        bucketIdx++;
    }
    count++;
    return count;
}
}

#endif


