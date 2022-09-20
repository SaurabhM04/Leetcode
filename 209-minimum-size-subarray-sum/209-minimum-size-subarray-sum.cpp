class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int ans=INT_MAX;
        int n=nums.size();
        int curr_sum=0;
        int i=0,j=0;
        while(j<n) {
            curr_sum+=nums[j];
            while(curr_sum>=target and i<=j) {
                ans=min(ans,j-i+1);
                curr_sum-=nums[i];
                i+=1;       
            }
            j+=1;
        }
        if(ans==INT_MAX) 
            return 0;
        return ans; 
    }
};