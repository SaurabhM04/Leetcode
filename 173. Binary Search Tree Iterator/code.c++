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
class BSTIterator {
public:
    stack<TreeNode* > st;
    
    BSTIterator(TreeNode* root) {
        saurabh(root);
    }
    void saurabh(TreeNode* root){
    while(root!=NULL){
        st.push(root);
        root=root->left;
        
    }
    }
    int next() {
        TreeNode* ans=st.top();
        st.pop();
        saurabh(ans->right);
        return ans->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};

