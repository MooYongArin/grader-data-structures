void splitList(list<T> &list1, list<T> &list2)
{
    // Add your code here
    int first_half = mSize/2 + mSize%2;
    node* n = mHeader->next; 
    for (size_t i = 0; i < first_half; i++)
    {
        n = n->next;
    }

    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    n->prev->next = list1.mHeader;
    list1.mHeader->prev = n->prev;
    list1.mSize = first_half;

    n->prev = list2.mHeader->prev;
    list2.mHeader->prev->next = n;
    mHeader->prev->next = list2.mHeader;
    list2.mHeader->prev = mHeader->prev;
    list2.mSize = mSize - first_half;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;
    
}
