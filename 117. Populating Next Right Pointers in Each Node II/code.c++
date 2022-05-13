class Solution
{
public:
    Node *connect(Node *root)
    {
        if (root == NULL)
        {
            return NULL;
        }
        queue<Node *> q;
        q.push(root);
        while (!q.empty())
        {
            int n = q.size();
            Node *prev = NULL;
            int i = n;
            while (i > 0)
            {
                auto top = q.front();
                q.pop();
                top->next = prev;
                prev = top;
                if (top->right)
                {
                    q.push(top->right);
                }
                if (top->left)
                {
                    q.push(top->left);
                }
                i--;
            }
        }
        return root;
    }
};