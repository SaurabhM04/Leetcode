class Solution
{
public:
    int smallestRangeII(vector<int> &nums, int k)
    {

        sort(nums.begin(), nums.end());
        int n = nums.size();

        int res = nums[n - 1] - nums[0]; //**
        int l = nums[0] + k, r = nums[n - 1] - k;

        for (int i = 0; i < n - 1; i++)
        {
            int maxm = max(nums[i] + k, r);

            int minm = min(l, nums[i + 1] - k);

            res = min(res, maxm - minm);
        }

        return res;
    }
};