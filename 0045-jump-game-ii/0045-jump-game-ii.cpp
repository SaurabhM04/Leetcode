/* by greedy
here maxi tells us that in case we want to jump then what is the maximum index we can go to.
limit tells us, till which index we are allowed to go currently.

initially we are on index 0 so our limit is also 0 as we know that we have to jump from index 0 to somewhere and that somewhere will be told by maxi.
after that again when we will touch our limit we will again update our jump count and update our limit to maxi.

edge case when our limit is n-1 , it means that we could reach n-1 , so we have to apply one extra condition of limit != n-1 as we don't want to update our jump count there.
*/



class Solution {
public:
    int jump(vector<int>& nums) {
        int limit=0,maxi=-1,i=0,n=nums.size(),ans=0;
        while(i<n) {
            maxi=max(maxi,nums[i]+i);
            if(i==limit and limit!=n-1) {
                ans++;
                limit=maxi;
            }
            i++;
        }
        return ans;
    }
};
//by DP
// class Solution {
// public:
//     int solve(int curr_index,vector<int>&nums,vector<int>&dp) {
//         int n=nums.size();
//         if(curr_index>=n-1) {
//             return 0;
//         }
//         if(dp[curr_index]!=-1) return dp[curr_index];
//         int ct=100000;
//         for(int i=curr_index+1;i<=curr_index+nums[curr_index];i++) {
//             ct=min(ct,1+solve(i,nums,dp));
//         }
//         return dp[curr_index]=ct;
//     }
//     int jump(vector<int>& nums) {
//         int ans=INT_MAX;
//         vector<int>dp(nums.size(),-1);
//         return solve(0,nums,dp);
//     }
// };