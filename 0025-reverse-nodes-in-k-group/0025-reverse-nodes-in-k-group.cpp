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
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
       
        if(!head)
            return NULL;
        
         ListNode*prev=NULL;
        ListNode*current=head;
        ListNode*next=NULL;
        
        int count=0;
       ListNode*cursor=head;
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
        
        
            head->next=reverseKGroup(next, k);
       // }
        return prev;

    }
};