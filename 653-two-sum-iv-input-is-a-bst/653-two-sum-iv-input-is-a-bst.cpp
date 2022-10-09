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
    vector<int>v;
    void preorder(TreeNode* root){
        if(!root)
            return;
        v.push_back(root->val);
        preorder(root->left);
        preorder(root->right);  
    }
    bool findTarget(TreeNode* root, int k) {
        preorder(root);
        for(int i=0; i<v.size(); i++)
        {
            for(int j=i+1; j<v.size(); j++)
            {
               if(v[i]+v[j]==k){
                   return true;
                   break;
                   }
            }
        }
        return false;
    }
};