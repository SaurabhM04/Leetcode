
class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {

        vector<int> v, v1;
        ListNode *ptr = head;
        ListNode *ptr1 = head;
        while (ptr)
        {
            v.push_back(ptr->val);
            ptr = ptr->next;
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] < x)
                v1.push_back(v[i]);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= x)
                v1.push_back(v[i]);
        }
        int i = 0;
        while (ptr1)
        {
            ptr1->val = v1[i++];
            ptr1 = ptr1->next;
        }
        return head;
    }
};