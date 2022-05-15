class Solution
{
public:
    int deepestLeavesSum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        queue<TreeNode *> qi;
        qi.push(root);
        int sum = 0;
        while (!qi.empty())
        {
            int n = qi.size();
            sum = 0;
            while (n > 0)
            {
                auto node = qi.front();
                qi.pop();
                if (node->left)
                    qi.push(node->left);
                if (node->right)
                    qi.push(node->right);
                sum += node->val;
                n--;
            }
        }
        return sum;
    }
};