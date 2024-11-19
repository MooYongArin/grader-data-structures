#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "map_bst.h"

namespace CP {

template <typename KeyT, typename MappedT, typename CompareT>
int CP::map_bst<KeyT, MappedT, CompareT>::node_relation(iterator it1, iterator it2) {
    // Write code here
    node *parent1 = NULL;
    node *parent2 = NULL;

    node* n1 = find_node(it1->first, mRoot, parent1);
    node* n2 = find_node(it2->first, mRoot, parent2);
    if (parent1 == n2 || parent2 == n1) return 1;

    node* n3 = find_node(n1->data.first, n2, parent1);
    node* n4 = find_node(n2->data.first, n1, parent2);
    if(n3 || n4) return 2;

    int height1 = 0;
    int height2 = 0;

    node *ptr1 = mRoot;
      while (ptr1 != NULL) {
        int cmp1 = compare(n1->data.first, ptr1->data.first);
        if (cmp1 == 0) break;
        height1++;
        ptr1 = cmp1 < 0 ? ptr1->left : ptr1->right;
    }

    node *ptr2 = mRoot;
      while (ptr2 != NULL) {
        int cmp2 = compare(n2->data.first, ptr2->data.first);
        if (cmp2 == 0) break;
        height2++;
        ptr2 = cmp2 < 0 ? ptr2->left : ptr2->right;
      }

    if(height1 == height2) return 4;
    return 3;
}

}

#endif