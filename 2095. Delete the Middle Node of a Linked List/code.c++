class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
       
		if(head==NULL || head->next==NULL){
			return NULL;
		}
		ListNode* ptr=head;
		int n=1;
		while(ptr->next != NULL){
		n++;
		ptr=ptr->next;
		}
		ptr=head;
		for(int i=1; i<n/2 ; i++){
		ptr= ptr->next;
		}
		ListNode* curr=ptr->next;
		ptr->next=curr->next;
		delete curr;
		return head;
        
    }
   
};