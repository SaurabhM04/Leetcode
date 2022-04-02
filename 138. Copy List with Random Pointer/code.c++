class Solution {
public:
    Node* copyRandomList(Node* head) {
    if(!head)return NULL;
        unordered_map<Node*,Node*>mp;
        int i=0;
        Node *h=head;
        Node *temp=new Node(h->val);
        mp[h]=temp;
        Node *p=temp;
        Node *r;
        h=h->next;
        
        while(h){
            r=new Node(h->val);
            mp[h]=r;
            p->next=r;
            p=p->next;
            h=h->next;
        }
        
        h=head,p=temp;
        while(h){
            if(h->random)
            p->random=mp[h->random];
           
            p=p->next;
            h=h->next;
        }
        return temp;
    }
};