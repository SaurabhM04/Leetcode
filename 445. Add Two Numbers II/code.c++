class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      
        ListNode *t1 = l1,*t2 = l2;
        stack<int> st1,st2;
        
        while(t1  != NULL){
            st1.push(t1->val);
            t1 = t1->next;
        }
        while(t2 != NULL){
            st2.push(t2->val);
            t2 = t2->next;
        }
        int carry = 0,sum = 0,ans = 0;
        ListNode *head = NULL;
        while(!st1.empty() || !st2.empty()){
            if(!st1.empty() && !st2.empty())
            sum = st1.top() + st2.top() + carry;
            else if(!st1.empty())
            sum = st1.top() + carry;
            else
            sum = st2.top() + carry;
            ans = sum % 10;
            carry = sum / 10;
            ListNode *newNode = new ListNode();
            newNode->next = head;
            newNode->val = ans;
            head = newNode;
            if(!st1.empty())
            st1.pop(); 
            
            if(!st2.empty())
            st2.pop();
        }
        if(carry != 0){
            ListNode *node = new ListNode();
            node->val = carry;
            node->next = head;
            head = node;
        }
        return head;
    }
};