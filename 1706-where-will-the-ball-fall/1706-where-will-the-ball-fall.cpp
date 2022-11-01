// class Solution {    
// public:
//     int recur(vector<vector<int>>& grid,int i,int j,vector<vector<int>>&dp,int m,int n)
//     {
//             if(i==m){
//              return j;
//             }
//             if(dp[i][j]!=-1)
//              return dp[i][j];
//             if(j+1<n && grid[i][j]==1 && grid[i][j+1]==1)
//              return dp[i][j]=recur(grid,i+1,j+1,dp,m,n);
//             if(j-1>=0 && grid[i][j]==-1 && grid[i][j-1]==-1)
//              return dp[i][j]=recur(grid,i+1,j-1,dp,m,n);
//             else 
//              return -1;      
//     }
//     vector<int> findBall(vector<vector<int>>& grid) {
//         vector<int>ans;
//         int m=grid.size(),n=grid[0].size();
//         vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
//         for(int i=0; i<grid[0].size(); i++)
//         {
//            ans.push_back(recur(grid,0,i,dp,m,n));
//         }
//         return ans;
//     }
// };

class Solution {
    
public:
    int recur(vector<vector<int>>& grid,int i,int j)
    {
         if(i==grid.size()){
            return j;
             cout<<j<<endl;
         }
            if(j+1<grid[0].size() && grid[i][j]==1 && grid[i][j+1]==1)
            return recur(grid,i+1,j+1);
            if(j-1>=0 && grid[i][j]==-1 && grid[i][j-1]==-1)
            return recur(grid,i+1,j-1);
            else return -1;
      
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        vector<int>ans;
        for(int i=0; i<grid[0].size(); i++)
        {
           ans.push_back(recur(grid,0,i));
        }
        return ans;
    }
};