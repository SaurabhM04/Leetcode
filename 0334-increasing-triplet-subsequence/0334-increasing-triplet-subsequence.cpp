class Solution {
public:
//     bool lis(vector<int>& nums) 
//     {
//         vector<int>ans;
//         ans.push_back(nums[0]);
//         for(int i=1;i<nums.size();i++)
//         {
//             if(ans.back()<nums[i])
//             {
//                 ans.push_back(nums[i]);
//             }
//             else
//             {
//                 int index=lower_bound(ans.begin(),ans.end(),nums[i])-ans.begin();
//                 ans[index]=nums[i];
//             }
//             if(ans.size()>=3)
//                 return true;
//         }
//         return false;
//     }
    
    bool lis1(vector<int>& nums)
    {
            int one = INT_MAX, two = INT_MAX;
            for (auto num : nums) 
            {
                if (num < one)
                    one = num;
                else if (one < num && num < two)
                    two = num;
                else if (two < num)
                    return true;
            }
            return false;
    };
 
    bool increasingTriplet(vector<int>& nums) {
        return lis1(nums);
        //return lis(nums);
    }
};