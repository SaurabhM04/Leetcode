class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        int n = nums.size();

        // bool m=true;
        //     bool s=true;
        //     for(int i=0; i<n-1; i++){
        //         if(nums[i]>nums[i+1]){
        //             m=false;
        //         }
        //         else if(nums[i]<nums[i+1]){
        //             s=false;
        //         }
        //         else
        //             continue;
        //     }
        //    if(m==false && s==false)
        //        return false;
        //     else
        //         return true;

        int m = 1, s = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] >= nums[i + 1])
            {
                m++;
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (nums[i] <= nums[i + 1])
            {
                s++;
            }
        }
        if (m == n || s == n)
            return true;
        else
            return false;
    }
};