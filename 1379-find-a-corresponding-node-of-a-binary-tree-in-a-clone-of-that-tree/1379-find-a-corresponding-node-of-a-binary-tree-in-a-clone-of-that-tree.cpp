/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<pair<TreeNode*,TreeNode*>>q;
        q.push(pair<TreeNode*,TreeNode*>(original,cloned));
        while(not q.empty()) {
            pair<TreeNode*,TreeNode*> k=q.front();
            q.pop();
            if(k.first==target) {
                return k.second;
            }
            if(k.first->left) {
                q.push(pair<TreeNode*,TreeNode*>(k.first->left,k.second->left));
            }
            if(k.first->right) {
                q.push(pair<TreeNode*,TreeNode*>(k.first->right,k.second->right));
            }
        }
        TreeNode* ans;
        return ans;
    }
};