/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      queue<Node*>q;
        q.push(root);
        if(!root)
            return {};
        vector<vector<int>>ans;
        while(!q.empty())
        {
            vector<int>v;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->val);
                for(auto x:temp->children)                    
                {
                    if(x)
                        q.push(x);
                }
            }
            ans.push_back(v);
        }
        return ans;
    }
};