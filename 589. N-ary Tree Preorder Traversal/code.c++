class Solution
{
public:
    vector<int> preorder(Node *root)
    {
        if (root == NULL)
            return {};
        stack<Node *> st;
        vector<int> res;
        st.push(root);
        while (!st.empty())
        {
            Node *ans = st.top();
            st.pop();
            for (int i = ans->children.size() - 1; i >= 0; i--)
            {
                st.push(ans->children[i]);
            }
            res.push_back(ans->val);
        }
        return res;
    }
};