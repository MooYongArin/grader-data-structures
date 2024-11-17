#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;

  node* n = mRoot;
  while (n != nullptr)
  {
    if (n->data.first >= val) result.insert(n->data);
    else erase(n->data.first);

    
  }
  

  return result;
}

#endif

