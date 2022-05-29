class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            int j = (i + k) % n;
            nums[j] = v[i];
        }
        // k=k%n;
        // reverse(nums.begin(),nums.end());
        // reverse(nums.begin(),nums.begin()+k);
        // reverse(nums.begin()+k,nums.end());
    }
};