class Solution
{
public:
    // bool findTarget(TreeNode* root, int k) {
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
    bool findTarget(TreeNode *root, int k)
    {
        saurabh(root);
        for (int i = 0; i < v.size(); i++)
        {
            for (int j = i + 1; j < v.size(); j++)
            {
                if (v[i] + v[j] == k)
                {
                    return true;
                }
            }
        }
        return false;
    }
};