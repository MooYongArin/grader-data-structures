#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT, typename MappedT, typename CompareT>
size_t CP::map_bst<KeyT, MappedT, CompareT>::process(node *n)
{
  // write your code here
  if (n == nullptr) return 0;
  return process(n->left) + process(n->right) + 1;
}

template <typename KeyT, typename MappedT, typename CompareT>
std::pair<KeyT, MappedT> CP::map_bst<KeyT, MappedT, CompareT>::subtree(map_bst<KeyT, MappedT, CompareT> &left, map_bst<KeyT, MappedT, CompareT> &right)
{
  // write your code here
  if (mRoot == nullptr) return std::pair<KeyT, MappedT>();
  left.clear();
  right.clear();

  int left_size = process(mRoot->left);
  int right_size = process(mRoot->right);
  if (mRoot->left != nullptr) {
      std::swap(left.mRoot, mRoot->left);
      left.mRoot->parent = nullptr;
      left.mSize = left_size;
  }
  if (mRoot->right != nullptr) {
      std::swap(right.mRoot, mRoot->right);
      right.mRoot->parent = nullptr;
      right.mSize = right_size;
  }

  mRoot->left = nullptr;
  mRoot->right = nullptr;
  mSize = 1;
  return mRoot->data;
}

#endif
