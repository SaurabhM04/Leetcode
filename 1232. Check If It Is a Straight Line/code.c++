class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &c)
    {
        int n = c.size();
        int Y = c[1][1] - c[0][1];
        int X = c[1][0] - c[0][0];
        for (int i = 2; i < n; i++)
        {
            auto p = c[i];
            if (X * (p[1] - c[0][1]) != Y * (p[0] - c[0][0]))
                return false;
        }
        return true;
    }
};