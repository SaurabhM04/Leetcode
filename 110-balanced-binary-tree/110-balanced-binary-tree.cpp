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
    int height(TreeNode* root,bool &res)
    {
        if(root==NULL)
            return 0;
        int a = height(root->left,res);
        int b = height(root->right,res);
        if(abs(a-b)>1)
            res=false;
        return max(a,b)+1;
    }
    bool isBalanced(TreeNode* root) 
    {
        bool ans=true;
        int x = height(root,ans);
        return ans;
    }
};