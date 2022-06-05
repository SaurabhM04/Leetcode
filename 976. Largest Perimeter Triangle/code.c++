class Solution
{
public:
    int largestPerimeter(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int sum = 0, maxi = 0;
        for (int i = n - 2; i > 0; i--)
        {
            if (nums[i] + nums[i - 1] > nums[i + 1])
            {
                maxi = max(maxi, nums[i + 1] + nums[i - 1] + nums[i]);
                sum++;
            }
            else
            {
                sum++;
            }
        }
        if (sum == n - 2 && maxi == 0)
            return 0;
        else
            return maxi;
    }
};