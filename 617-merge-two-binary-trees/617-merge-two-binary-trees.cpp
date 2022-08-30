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
// class Solution {
// public:
//     TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
//         if(root1&&root2)
//         {
//             TreeNode* n=new TreeNode(root1->val+root2->val);
//             n->left=mergeTrees(root1->left,root2->left);
//             n->right=mergeTrees(root1->right,root2->right);
//             return n;
//         }
//         else return !root1?root2:root1; 
       
//     }
// };







class Solution {
public:            
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
           if(root1 and root2) {
               TreeNode* root=new TreeNode(root1->val+root2->val);
               root->left=mergeTrees(root1->left,root2->left);
               root->right=mergeTrees(root1->right,root2->right);
               return root;
           }
           if(root1) {
               return root1;
           }
            return root2;
        }
};