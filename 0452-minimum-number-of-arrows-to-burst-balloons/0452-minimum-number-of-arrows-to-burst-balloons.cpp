class Solution {
    static bool cmp(vector<int>&a,vector<int>&b){
        return a[1]<b[1];
    }
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end(),cmp);
        int n=points.size();
        int ans=0;
        int a=points[0][1];
        ans++;
        for(int i=1; i<n; i++){
            if(a>=points[i][0] && a<=points[i][1]){
                continue;
            }
            else{
                a=points[i][1];
                ans++;
            }
        }
        return ans;
    }
};