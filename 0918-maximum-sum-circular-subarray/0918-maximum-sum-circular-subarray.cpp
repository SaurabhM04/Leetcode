class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxi=INT_MIN,mini=INT_MAX,total_sum=0,sum=0,n=nums.size();
        for(int i=0;i<n;i++) {
            total_sum+=nums[i];
            sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0) 
                sum=0;
        }
        sum=0;
        for(int i=0;i<n;i++) {
            sum+=nums[i];
            mini=min(sum,mini);
            if(sum>0) 
                sum=0;
        }
        
        if(total_sum==mini) {
            return maxi;
        }
        return max(maxi,total_sum-mini);
    }
};