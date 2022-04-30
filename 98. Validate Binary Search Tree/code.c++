class Solution
{
public:
    vector<int> v;
    void saurabh(TreeNode *root)
    {
        if (root == NULL)
        {
            return;
        }
        saurabh(root->left);
        v.push_back(root->val);
        saurabh(root->right);
    }
    bool isValidBST(TreeNode *root)
    {
        saurabh(root);
        for (int i = 0; i < v.size() - 1; i++)
        {
            if (v[i] < v[i + 1])
            {
                continue;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};