class Solution
{
public:
    vector<int> numberOfPairs(vector<int> &nums)
    {
        vector<int> v;
        unordered_map<int, int> mp;
        for (auto x : nums)
            mp[x]++;
        int sum = 0, x = 0;
        for (auto y : mp)
        {
            if (y.second > 1 && y.second % 2 == 0)
            {
                sum += (y.second / 2);
            }
            else if (y.second % 2 != 0)
            {
                sum += (y.second / 2);
                x++;
            }
        }
        v.push_back(sum);
        v.push_back(x);
        return v;
    }
};