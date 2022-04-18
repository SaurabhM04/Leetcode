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
public:
    vector<int> v;
    void saurabh(TreeNode *root)
    {
        if (!root)
            return;
        saurabh(root->left);
        v.push_back(root->val);
        saurabh(root->right);
    }
    int kthSmallest(TreeNode *root, int k)
    {
        saurabh(root);
        int m = v[k - 1];
        return m;
    }
};