class Solution
{
public:
    int maxDepth(TreeNode *root)
    {

        if (root == NULL)
            return 0;
        else
        {
            return max(maxDepth(root->left) + 1, maxDepth(root->right) + 1);
        }
    }
};