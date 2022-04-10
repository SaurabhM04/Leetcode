class Solution
{
public:
	ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
	{
		ListNode *m, *n, *p;
		m = list1;
		n = list1;
		p = list2;

		a = a - 2;
		while (a >= 0)
		{
			m = m->next;
			a--;
		}

		// b=b+1;
		while (b >= 0)
		{
			n = n->next;
			b--;
		}
		while (p->next != NULL)
		{
			p = p->next;
		}

		m->next = list2;
		p->next = n;

		return list1;
	}
};