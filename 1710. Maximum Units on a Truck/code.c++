class Solution
{
    static bool comparator(vector<int> &a, vector<int> &b)
    {

        return a[1] > b[1];
    }

public:
    int maximumUnits(vector<vector<int>> &boxtypes, int t)
    {
        int n = boxtypes.size();

        sort(boxtypes.begin(), boxtypes.end(), comparator);

        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (boxtypes[j][0] <= t)
            {
                sum += (boxtypes[j][0] * boxtypes[j][1]);
                t -= boxtypes[j][0];
            }
            else if (t > 0)
            {
                sum += (boxtypes[j][1] * t);
                break;
            }
        }
        return sum;
    }
};