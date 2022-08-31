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
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int s=q.size();
            for(int i=0;i<s;i++) {
                TreeNode* temp=q.front();
                if(temp!=NULL)
                v.push_back(temp->val);
                else
                    v.push_back(200);
                q.pop();
                if( temp!=NULL) {
                    q.push(temp->left);
                    q.push(temp->right);
                }
            }
            int l=0,r=v.size()-1;
            while(l<r) {
                if(v[l++]!=v[r--]) {
                    return false;
                }
            }
        }
        return true;
    }
};