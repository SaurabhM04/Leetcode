class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> v(n, 1);
        vector<int> v1(m, 1);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (matrix[i][j] == 0)
                {
                    v[i] = 0;
                    v1[j] = 0;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (v[i] == 0 || v1[j] == 0)
                    matrix[i][j] = 0;
            }
        }
    }
};