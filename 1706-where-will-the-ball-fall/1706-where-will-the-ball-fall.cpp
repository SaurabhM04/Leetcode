class Solution {
    
public:
    int recur(vector<vector<int>>& grid,int i,int j)
    {
         if(i==grid.size())
            return j;
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