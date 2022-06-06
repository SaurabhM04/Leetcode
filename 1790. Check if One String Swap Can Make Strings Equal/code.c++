class Solution
{
public:
    bool areAlmostEqual(string s1, string s2)
    {
        int n = s1.length();
        int sum = 0, m = 0;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                v.push_back(s1[i]);
                v.push_back(s2[i]);
                sum++;
            }
            else
                m++;
        }
        if (sum == 2 && (v[0] == v[3]) && (v[1] == v[2]))
            return true;
        else if (m == n)
        {
            return true;
        }
        else
            return false;
    }
};