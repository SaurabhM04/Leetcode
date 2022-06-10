class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {

        int i = 0;
        int j = nums.size() - 1;
        int lp = -1;
        int rp = -1;
        while (i <= j)
        {

            if (nums[i] == target || nums[j] == target)

            {
                lp = i;
                rp = j;
                if (nums[lp] == nums[rp])
                    return {lp, rp};
            }
            if (nums[i] < target)
                i++;
            if (nums[j] > target)
                j--;
        }

        return {lp, rp};
    }
};