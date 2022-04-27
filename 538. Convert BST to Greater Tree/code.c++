
class Solution {
    int  sum=0;
public:
    TreeNode* convertBST(TreeNode* root) {
      if(!root){
          return NULL;
      }  
     //   int sum=0;
     if (root) {
            convertBST(root->right);
            root->val += sum;
            sum = root->val;
            convertBST(root->left);
        }
        return root;
       
    }
   
};