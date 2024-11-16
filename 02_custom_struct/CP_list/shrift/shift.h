void shift(int k)
{
	// TODO: Add your code here
	int n = mSize;
	k %= n;
	if (k < 0)
		k = (k + n) % n;
	node *p = mHeader->next;
	for (int i = 0; i < k; i++)
		p = p->next;

	mHeader->next->prev = mHeader->prev;
	mHeader->prev->next = mHeader->next;

	mHeader->next = p;
	mHeader->prev = p->prev;

	p->prev->next = mHeader;
	p->prev = mHeader;
}
