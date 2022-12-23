
class Solution {
public:
    void solve(int curr_index,vector<int>curr_state,vector<int>&nums,set<vector<int>>&ans) {
        if(curr_index>=nums.size()) {
            ans.insert(curr_state);
            return ;
        }       
        solve(curr_index+1,curr_state,nums,ans);
        curr_state.push_back(nums[curr_index]);
        solve(curr_index+1,curr_state,nums,ans);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans1;
        set<vector<int>>ans;
        vector<int>curr_state;
        sort(nums.begin(),nums.end()); 
        solve(0,curr_state,nums,ans);
        for(auto x:ans){
            ans1.push_back(x);
        }
        return ans1;
    }
};
