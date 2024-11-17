#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <iostream>

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;

  int currentTree = 0;
  node* ptr = mRoot;
  node* parentLeft = NULL;
  node* parentRight = NULL;
  while (ptr != NULL) {
    if (currentTree == 0) {
      if (compare(val, ptr->data.first) <= 0) {
        // std::cout << "1 " << ptr->data.first << std::endl;
        parentLeft = ptr->parent;
        child_link(parentLeft, val) = NULL;
        result.child_link(parentRight, val) = ptr;
        ptr->parent = parentRight;
        ptr = ptr->left;
        currentTree = 1;
      }
      else {
        // std::cout << "2 " << ptr->data.first << std::endl;
        ptr = ptr->right;
      }
    }
    else {
      if (compare(val, ptr->data.first) > 0) {
        // std::cout << "3 " << ptr->data.first << std::endl;
        parentRight = ptr->parent;
        if (parentRight != NULL) parentRight->left = NULL;
        child_link(parentLeft, val) = ptr;
        ptr->parent = parentLeft;
        ptr = ptr->right;
        currentTree = 0;
      }
      else {
        // std::cout << "4 " << ptr->data.first << std::endl;
        ptr = ptr->left;
      }
    }
  }

  return result;
}

#endif

