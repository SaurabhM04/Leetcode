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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* ptr=head;
        if(head==NULL || head->next==NULL){
			return NULL;
		}
        int n=1; 
        while(ptr->next!=NULL){
        ptr=ptr->next;
        n++;
        }
        int k=n/2;
        ptr=head;
        k--;
        while(k--){
            ptr=ptr->next;
        }
        ptr->next=ptr->next->next;
        return head;
    }
};