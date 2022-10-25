class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n=intervals.size();
        vector<vector<int>>v;
        int j=0;
        sort(intervals.begin(),intervals.end());
        v.push_back(intervals[0]);
        for(int i=0; i<n-1; i++){
            //int j=0;
            if(v[j][1]>=intervals[i+1][0])
                v[j][1]=max(v[j][1],intervals[i+1][1]);
            else
                v.push_back(intervals[i+1]),j++;
        }
        return v;
    }
};