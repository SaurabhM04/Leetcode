class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int s, int d) {
       
        vector<int> adj[n];
        for(int i=0; i<edges.size(); i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }

        queue<int> q;
        q.push(s);
        vector<bool> vis(n, false);
        while(!q.empty())
        {
            int node = q.front();
            if(vis[d]) return true;
            q.pop();
            vis[node]=true;
            for(int it:adj[node])
            {
                if(!vis[it])
                {
                    q.push(it);
                    vis[it]=true;
                }
            }
        }
        return vis[d];
    }
};