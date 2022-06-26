class Solution
{
public:
    vector<bool> checkArithmeticSubarrays(vector<int> &nums, vector<int> &l, vector<int> &r)
    {
        int n = nums.size();
        int m = l.size();
        vector<bool> v(m);
        int i = 0;
        while (m--)
        {
            int y = r[i] - l[i];
            int j = 0;
            vector<int> mp;
            while (y >= 1)
            {
                mp.push_back(nums[l[i] + j]);
                y--;
                j++;
            }
            mp.push_back(nums[r[i]]);
            sort(mp.begin(), mp.end());
            int sum = 0;
            for (int k = 0; k < mp.size() - 2; k++)
            {
                if (mp[k + 1] - mp[k] == mp[k + 2] - mp[k + 1])
                    sum++;
                else
                    break;
                ;
            }
            if (sum == mp.size() - 2)
            {
                v[i] = true;
            }
            else
            {
                v[i] = false;
            }
            i++;
        }
        return v;
    }
};