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
    int dfs(TreeNode* root,int sum)
    {
        if(!root)
          return 0;
        
        if(root->left==NULL && root->right==NULL)
            return root->val;
        
        int lsum= dfs(root->left,sum);
        int rsum=dfs(root->right,sum);
        
        if(lsum==0 )
            root->left=NULL;
        if(rsum==0 )
            root->right=NULL;
        
         sum=lsum+rsum+root->val;
         return sum;
        
    }
    TreeNode* pruneTree(TreeNode* root) {
        int sum=0;
        int ans=dfs(root,sum);
        if(ans==0)return NULL;
        return root;
    }
};