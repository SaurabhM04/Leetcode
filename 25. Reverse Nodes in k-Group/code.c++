class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       
        if(!head)
            return NULL;
        
        struct ListNode*prev=NULL;
        struct ListNode*current=head;
        struct ListNode*next=NULL;
        
        int count=0;
        struct ListNode*cursor=head;
        
        for(int i=0; i<k; i++)   //for maintaining that three k nodes are there
        {
            if(cursor==NULL)
                return head;
            cursor=cursor->next;
        }
        
        while(current!=NULL && count<k)
        {
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        
        if(count)
        {
            head->next=reverseKGroup(next, k);
        }
        return prev;

    }
};