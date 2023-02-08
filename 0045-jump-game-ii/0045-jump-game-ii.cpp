class Solution {
public:
    int solve(int curr_index,vector<int>&nums,vector<int>&dp) {
        int n=nums.size();
        if(curr_index>=n-1) {
            return 0;
        }
        if(dp[curr_index]!=-1) return dp[curr_index];
        int ct=100000;
        for(int i=curr_index+1;i<=curr_index+nums[curr_index];i++) {
            ct=min(ct,1+solve(i,nums,dp));
        }
        return dp[curr_index]=ct;
    }
    int jump(vector<int>& nums) {
        int ans=INT_MAX;
        vector<int>dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
};