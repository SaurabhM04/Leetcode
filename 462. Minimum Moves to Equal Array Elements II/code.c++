class Solution
{
public:
    int minMoves2(vector<int> &nums)
    {

        int sum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int mid = n / 2;
        for (int j = 0; j < n; j++)
        {
            sum += abs(nums[j] - nums[mid]);
        }

        return sum;
    }
};