/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {

        ListNode *ptr = head;
        if (ptr == NULL || ptr->next == NULL)
        {
            return NULL;
        }
        int i = 1;
        while (ptr->next != NULL)
        {
            i++;
            ptr = ptr->next;
        }
        ptr = head;
        int y = i - n;
        for (int j = 0; j < y - 1; j++)
        {
            ptr = ptr->next;
        }
        if (i == n)
        {
            return head->next;
        }
        ListNode *curr = ptr->next;
        ptr->next = curr->next;
        delete curr;
        return head;
    }
};