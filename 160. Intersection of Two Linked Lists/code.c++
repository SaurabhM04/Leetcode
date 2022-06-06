/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {

        ListNode *ptr = headA, *ptr1 = headB;
        int a = 0, b = 0;
        while (ptr != NULL)
        {
            ptr = ptr->next;
            a++;
        }
        ptr = headA;

        while (ptr1 != NULL)
        {
            ptr1 = ptr1->next;
            b++;
        }
        ptr1 = headB;
        if (a > b)
        {
            for (int i = 0; i < a - b; i++)
            {
                ptr = ptr->next;
            }
        }
        else
        {
            for (int i = 0; i < b - a; i++)
            {
                ptr1 = ptr1->next;
            }
        }
        while (ptr1 != NULL)
        {
            if (ptr1 == ptr)
            {
                return ptr;
            }
            ptr = ptr->next;
            ptr1 = ptr1->next;
        }
        return NULL;
    }
};