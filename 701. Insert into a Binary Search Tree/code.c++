class Solution
{
public:
    TreeNode *insertIntoBST(TreeNode *root, int val)
    {

        TreeNode *cur = root, *node = new TreeNode(val);
        while (cur)
        {
            if (cur->val > val)
            {
                if (cur->left)
                {
                    cur = cur->left;
                }
                else
                {
                    cur->left = node;
                    break;
                }
            }
            else
            {
                if (cur->right)
                {
                    cur = cur->right;
                }
                else
                {
                    cur->right = node;
                    break;
                }
            }
        }
        if (!root)
            return node;
        else
            return root;

        // if (!node) {
        // 	TreeNode *newNode = new TreeNode(val);
        // 	return newNode;
        // }
        // if (val < node->val) {
        // 	node->left = insertIntoBST(node->left, val);
        // }
        // else {
        // 	node->right = insertIntoBST(node->right, val);
        // }
        // return node;
    }
};