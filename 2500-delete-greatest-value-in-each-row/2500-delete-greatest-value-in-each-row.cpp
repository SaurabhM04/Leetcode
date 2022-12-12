class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        vector<vector<int>>v,v1;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0; i<grid.size(); i++){
            sort(grid[i].begin(),grid[i].end());
        }
        int ans=0;
        for(int j=m-1; j>=0; j--){  
            vector<int>v2;
            for(int i=0; i<n; i++){
                v2.push_back(grid[i][j]);
            }
            v1.push_back(v2);
        }
        for(int i=0; i<v1.size(); i++){
            sort(v1[i].begin(),v1[i].end());
        }
        for(int i=0; i<v1.size(); i++){
            ans+=v1[i].back();
        }
        return ans;
        
    }
};