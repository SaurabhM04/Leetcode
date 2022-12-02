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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode* dummy = new ListNode(0) ;
        
        dummy->next = head ; 
        ListNode *ptr = dummy ;
        
        for(int i=1;i<left;i++){
            ptr=ptr->next ;     
        }
        
        ListNode* newhead = ptr->next;

        
        ListNode* curr = newhead;
        ListNode* next;
        ListNode* prev=NULL;
        
        int j=right-left+1;
        
        while(j-- )
        {
            next = curr->next;      
            curr->next = prev;      
            prev = curr;           
            curr = next;            
		}   
        
        ptr->next = prev ; 
        newhead->next = next;
        
        return dummy->next;
        
//         ListNode* temp=head;
//         ListNode* temp1=head;
//         vector<int>v;
//         while(temp){
//             v.push_back(temp->val);
//             temp=temp->next;
//         }
//         reverse(v.begin()+l-1,v.begin()+r);
//         int i=0;
//         while(temp1){
//             temp1->val=v[i++];
//             temp1=temp1->next;
//         }
//         return head;
        
    }
};
