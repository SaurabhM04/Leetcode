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
    int sum = 0;
    void sumOfLeftLeaves(TreeNode* root, bool isLeft){
        if(isLeft && !root->left && !root->right) {
            sum += root->val;
            return;
        }
        if(root->left)
            sumOfLeftLeaves(root->left, true);
        if(root->right) 
            sumOfLeftLeaves(root->right, false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root) 
            return 0;
        sumOfLeftLeaves(root, false);
        return sum;
    }
};