class Solution {
public:
    ListNode* sortList(ListNode* head) {
  
    vector<int>v;
    ListNode*m=head,*s=head;
    while(m!=NULL)
    {
      v.push_back(m->val);
        m=m->next;
    }
    
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        s->val=v[i];
        s=s->next;
    }
    return head;
    }
};