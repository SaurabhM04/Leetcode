class Solution
{
public:
    int maxProfit(vector<int> &p)
    {

        int n = p.size();

        int x = 0, y = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            x = max(x, p[i]);
            y = max(y, x - p[i]);
        }
        return y;
    }
};