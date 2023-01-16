class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& na) {
        intervals.push_back(na);
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        ans.push_back(intervals[0]);
        for(int i=1; i<intervals.size(); i++)
        {
            if(ans.back()[1]>=intervals[i][0])
            {
                ans.back()[1]=max(intervals[i][1],ans.back()[1]);
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};