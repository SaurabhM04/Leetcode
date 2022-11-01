class Solution {
public:
    vector<vector<int>>ans;
    void rec(int idx,vector<int>& candidates,vector<int> &v, int &target)
    {
        if(target<0) return;
        if(target==0) 
        {
            ans.push_back(v);
            return;
        }
        for(int i=idx;i<candidates.size();i++)
        {
            v.push_back(candidates[i]);
            target-=candidates[i];
            rec(i,candidates,v,target);
            v.pop_back();
            target+=candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx=0;
        vector<int>curr_ele;
        rec(0,candidates,curr_ele,target);
        return ans;
    }
};