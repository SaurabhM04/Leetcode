class Solution
{
public:
    int maximumBags(vector<int> &c, vector<int> &r, int a)
    {
        int n = c.size();
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(c[i] - r[i]);
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for (int j = 0; j < n && a; j++)
        {
            if (v[j] <= a)
            {
                a -= v[j];
                sum++;
            }
            else
            {
                break;
            }
        }
        return sum;
    }
};