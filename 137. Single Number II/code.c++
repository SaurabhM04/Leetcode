class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (auto x : nums)
            mp[x]++;
        int k;
        for (auto y : mp)
        {
            if (y.second == 1)
            {
                k = y.first;
                break;
            }
        }
        return k;
    }
};