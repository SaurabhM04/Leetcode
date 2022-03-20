/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
ListNode* swapNodes(ListNode* head, int k) {

	ListNode *ptr=head;
    int x=0;
    while(ptr->next!=NULL){         
        ptr=ptr->next;
        x++;
    }             
          ListNode *curr=head;
          for(int i = 0 ; i<k-1 ; i++){                 
              curr=curr->next;             
          }
         
          ListNode *curr2=head;
         for(int i = 0 ; i<x-k+1 ; i++) {
               curr2=curr2->next;                
          }
          swap(curr->val,curr2->val);
          return head;
}
};