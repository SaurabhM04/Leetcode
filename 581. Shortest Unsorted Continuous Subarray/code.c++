class Solution
{
public:
    int findUnsortedSubarray(vector<int> &nums)
    {

        vector<int> v = nums;
        sort(v.begin(), v.end());
        int n = nums.size(), s = 0, j = n - 1;
        while (s < n && nums[s] == v[s])
        {
            s++;
        }
        while (j > s && nums[j] == v[j])
        {
            j--;
        }
        return j + 1 - s;
    }
};