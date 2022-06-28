class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> arr;

        for (int i = 0; i < numRows; i++)
        {
            vector<int> v;
            if (i == 0)
            {
                v.push_back(1);
            }
            else
            {
                for (int j = 0; j <= i; j++)
                {
                    if (j == 0 || j == i)
                    {
                        v.push_back(1);
                    }
                    else
                    {
                        v.push_back(arr[i - 1][j - 1] + arr[i - 1][j]);
                    }
                }
            }
            arr.push_back(v);
        }

        return arr;
    }
};