#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
bool CP::list<T>::check() {
  node* n = mHeader->next;

  for (size_t i = 0; i < mSize; ++i) {

    if (n == nullptr || n->next == nullptr || n->prev == nullptr || n->next->prev != n || n->prev->next != n) {
      return false;
    }
    n = n->next;
  }

  return (n == mHeader && mHeader->prev->next == mHeader && mHeader->next->prev == mHeader);
}

#endif
