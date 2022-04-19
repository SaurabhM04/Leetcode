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
class Solution
{
private:
    TreeNode *first, *prev, *last;

private:
    void saurabh(TreeNode *root)
    {
        if (root == NULL)
            return;

        saurabh(root->left);

        if (prev != NULL && (root->val < prev->val))
        {
            if (first == NULL)
            {
                first = prev;
                last = root;
            }
            else
                last = root;
        }
        prev = root;
        saurabh(root->right);
    }

public:
    void recoverTree(TreeNode *root)
    {
        first = last = NULL;
        prev = new TreeNode(INT_MIN);
        saurabh(root);
        swap(first->val, last->val);
    }
};
