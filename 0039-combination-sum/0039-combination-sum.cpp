class Solution {
public:
    vector<vector<int>>ans;
    void solve(int idx,vector<int>&v,vector<int>& nums,int target)
    {
        if(idx>=nums.size())
            return;
        if(target==0){
            ans.push_back(v);
           return;
        }
        if(target<0)
            return;
        v.push_back(nums[idx]);
        target-=nums[idx];
        solve(idx,v,nums,target);
        v.pop_back();
        target+=nums[idx];
        solve(idx+1,v,nums,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int>v;
        solve(0,v,nums,target);
        return ans;
    }
};