class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 1, maxi = 1;
        ;
        sort(nums.begin(), nums.end());
        vector<int> v;
        if (n == 0)
            return 0;
        for (int i = 0; i < n - 1; i++)
        {

            if (nums[i + 1] == nums[i] + 1)
            {
                sum++;
                maxi = max(maxi, sum);
            }
            else if (nums[i + 1] == nums[i])
            {
                continue;
            }
            else
            {
                sum = 1;
            }
        }

        return maxi;
    }
};