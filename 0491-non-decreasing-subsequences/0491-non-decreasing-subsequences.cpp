class Solution {
public:
    
void solve(int curr_index,vector<int>curr_state,vector<int>&nums,set<vector<int>>&ans) {
        if(curr_index>=nums.size()) {
            if(curr_state.size()>1)
            ans.insert(curr_state);
            return ;
        }
        if(curr_state.empty()||curr_state.back()<=nums[curr_index])
        {
            curr_state.push_back(nums[curr_index]);
            solve(curr_index+1,curr_state,nums,ans);
            curr_state.pop_back();
        }
        solve(curr_index+1,curr_state,nums,ans);
        
    }    
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        vector<int>curr_state;
        solve(0,curr_state,nums,st);
        for(auto x:st){
            ans.push_back(x);
        }
        return ans;
    }
};