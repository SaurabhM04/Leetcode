class Solution
{
public:
    bool f(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 && !root2)
            return true;
        ;
        if (!root2 || !root1)
            return false;
        return (root1->val == root2->val) && f(root1->left, root2->right) && f(root1->right, root2->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        if (!root)
            return true;
        return f(root->left, root->right);
    }
};