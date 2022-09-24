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
    void solve(TreeNode* root, int & curr_sum,int & target,int &ans) {
        if(not root) {
            return;
        }
        curr_sum+=root->val;
        if(not root->left and not root->right) {
            if(curr_sum==target) {
                ans=true;
            }else {
                curr_sum-=root->val;
            }
            return;
        }
        if(root->left) {
            solve(root->left,curr_sum,target,ans);
        }
        if(root->right) {
            solve(root->right,curr_sum,target,ans);
        }
        curr_sum-=root->val;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int ans =false;;
        int curr_sum=0;
        solve(root,curr_sum,targetSum,ans);
        return ans;
    }
};