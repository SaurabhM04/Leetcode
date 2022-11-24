class Solution {
public:
    bool dfs(int m,int n,int i,int j,vector<vector<char>>&grid,string &word,int k,vector<vector<bool>>& is_visited)
    {
        if(k==word.size())
            return true;
        if(i<0||i>=m||j<0||j>=n||is_visited[i][j]||grid[i][j]!=word[k])
            return false;
        char x=grid[i][j];
        is_visited[i][j]=true;
        bool down=dfs(m,n,i+1,j,grid,word,k+1,is_visited);
        bool right=dfs(m,n,i,j+1,grid,word,k+1,is_visited);
        bool left=dfs(m,n,i-1,j,grid,word,k+1,is_visited);
        bool up=dfs(m,n,i,j-1,grid,word,k+1,is_visited);
        is_visited[i][j]=false;
        return up||down||right||left;  
    }
    bool exist(vector<vector<char>>& grid, string word) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<bool>>is_visited(m,vector<bool>(n,false));
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(dfs(m,n,i,j,grid,word,0,is_visited))
                    return  true;
            }
        }
        return false;
    }
}; 