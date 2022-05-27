class Solution
{
public:
    vector<int> beautifulArray(int n)
    {

        if (n == 1)
            return {1};

        vector<int> v = beautifulArray(n / 2);
        vector<int> v1 = beautifulArray(n - (n / 2));

        vector<int> res;

        for (auto m : v)
            res.push_back(m * 2);

        for (auto s : v1)
            res.push_back(s * 2 - 1);

        return res;
    }
};