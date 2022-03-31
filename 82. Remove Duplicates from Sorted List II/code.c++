class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        
  
    map<int,int>mp;
    ListNode* ptr = head;
    while(ptr!=NULL){
        mp[(ptr->val)]++;
        ptr = ptr->next;
    }
           
    ListNode* ans = new ListNode(0);
    ListNode* temp = ans;
    
    for (auto i : mp){
        if(i.second == 1){
        temp->next = new ListNode(i.first);
        temp = temp->next;
        }
       
    }
    
    return ans->next;
    }
};