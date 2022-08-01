class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        vector<int> path(n, 1);
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 1; j < n; j++)
            {
                path[j] += path[j - 1];
            }
        }
        return path[n - 1];
    }
};