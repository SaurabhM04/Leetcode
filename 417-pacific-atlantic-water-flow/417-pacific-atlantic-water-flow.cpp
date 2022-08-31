class Solution {
public:
    void dfs(vector<vector<int>>& heights,vector<vector<int>> & ocean,int x,int y,int m, int n) {
        if(x<0 or y<0 or x>=heights.size() or y>=heights[0].size()) {
            return ;
        }
        if(not ocean[x][y]){
            ocean[x][y]=1;
            int k=heights[x][y];
            if(y+1<m and heights[x][y+1]>=k) {
                dfs(heights,ocean,x,y+1,m,n);
            }
            if(y-1>=0 and heights[x][y-1]>=k) {
                dfs(heights,ocean,x,y-1,m,n);
            }
            if(x-1>=0 and heights[x-1][y]>=k) {
                dfs(heights,ocean,x-1,y,m,n);
            }
            if(x+1 <n and heights[x+1][y]>=k) {
                dfs(heights,ocean,x+1,y,m,n);
            }
        }
    }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> atlantic(n,vector<int>(m,0)),pacific(n,vector<int>(m,0));
        //0 means not visited
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i==0 or j==0) {
                    if(not pacific[i][j]) {
                        dfs(heights,pacific,i,j,m,n);
                    }
                }
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(i==n-1 or j==m-1) {
                    if(not atlantic[i][j]) {
                        dfs(heights,atlantic,i,j,m,n);
                    }
                }
            }
        }
        
        vector<vector<int>>ans;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                // cout<<atlantic[i][j]<<"  ";
                //cout<<pacific[i][j]<<"  ";
                if(atlantic[i][j] and pacific[i][j]) {
                    ans.push_back(vector<int>{i,j});
                }
            }
         //cout<<endl;
        }
        return ans;
    }
};