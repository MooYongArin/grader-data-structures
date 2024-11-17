#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::my_recur(node *n, int level, int tmp)
{
    // you MAY need to use this function
    mSize++;
    if (n == nullptr) return;
    if (tmp == level)
    {
        delete_all_nodes(n->left);
        delete_all_nodes(n->right);
        n->left = nullptr;
        n->right = nullptr;
    }
    if (n->left != nullptr) my_recur(n->left, level, tmp + 1);
    if (n->right != nullptr) my_recur(n->right, level, tmp + 1);
}

template <typename KeyT,
          typename MappedT,
          typename CompareT>
void CP::map_bst<KeyT, MappedT, CompareT>::trim(int depth)
{
    /*write your code here
    If you cry on seeing the question, it is an insult.
    If your teacher cries upon seeing your answer submission,
    it is your achievement.
    Good luck with final and see you in Algorithm Design.
    */
    if (depth == -1)
    {
        clear();
        return;
    }
    mSize = 0;
    my_recur(mRoot, depth, 0);
}

#endif
