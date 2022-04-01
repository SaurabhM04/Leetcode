class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
      
    if(head!=NULL && k!=0)
    {
        ListNode* n = head;
        int s=0;
        while(n!=NULL)
        {
            s++;
            n=n->next;
        }
        k = k%s;
    }
    while(k--)
    {
        if(head==NULL || head->next == NULL )
        {
            return head;
        }
        ListNode*temp = head;
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        ListNode*t = temp->next;
        temp->next->next= head;
        temp->next=NULL;
        head =t;
    }
    return head;     
    }
};