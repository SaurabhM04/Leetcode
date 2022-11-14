// GRAPH
// copy pasted
class Solution {
public:
    void dfs(vector<int>adj[],int src,vector<bool>&vis)
    {
        vis[src]=true;
        for(auto child : adj[src])
        {
            if(!vis[child])
            dfs(adj,child,vis);
        }
      }
    
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        vector<int> adj[stones.size()];
        for(int i=0;i<stones.size();i++)
        {
            for(int j=i+1;j<stones.size();j++)
            {
                if(stones[j][0]==stones[i][0] || stones[j][1]==stones[i][1])
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<bool>vis(n,false);
        int cnt = 0;
        for (int i = 0; i < n; i++) 
        {
            if (!vis[i]) 
            {
               dfs(adj,i,vis);
               cnt++;
            }
        }
    return n-cnt;
    }
};