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
    int leftHeight(TreeNode*root) {
        int lh =0;
        while(root)
        {
            lh++;
            root= root->left;
        }
        return lh;
    }
    int rightHeight(TreeNode*root) {
        int rh =0;
        while(root)
        {
            rh++;
            root = root->right;
        }
        return rh;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
      int lh = leftHeight(root);
      int rh = rightHeight(root);
      if(lh == rh)
      {
       return (1<<lh) -1;   
      }
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
//using bfs
// class Solution {
// public:
//     int countNodes(TreeNode* root) {
//         queue<TreeNode*>q;
//         int ans=0;
//         if(!root)
//             return 0;
//         q.push(root);
//         //ans++;
//         while(!q.empty()){
//             int n=q.size();
//             while(n--){
//                 TreeNode* temp=q.front();
//                 q.pop();
//                 ans++;
//                 if(temp->left)
//                     q.push(temp->left);
//                 if(temp->right)
//                     q.push(temp->right);
//             }
//         }
//         return ans;
//     }
// };