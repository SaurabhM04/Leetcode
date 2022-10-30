//just do a simple bfs with all the possibilites from a particular cell and make one visited vector with three things as x,y,curr_k_value

//copy pasted :(
class Solution {
public:
    bool is_valid(int row,int col,int m,int n) {
        if(row==-1 or col==-1 or row==m or col==n) {
            return false;
        }
        return true;
    }
    int shortestPath(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size(),steps=0;
        queue<vector<int>>q;//vector-> x,y,k
        // set<vector<int>>visited;
        vector<vector<vector<bool>>>visited(m,vector<vector<bool>>(n,vector<bool>(k+1,false)));
        q.push({0,0,k});
        visited[0][0][k]=true;
        vector<pair<int,int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
        while(not q.empty()) {
            int st=q.size();
            for(int i=0;i<st;i++) {
                vector<int>curr_cell=q.front();
                if(curr_cell[0]==m-1 and curr_cell[1]==n-1) {
                    return steps;
                }
                q.pop();
                for(auto d:dir) {
                    int new_row=curr_cell[0]+d.first;
                    int new_col=curr_cell[1]+d.second;
                    if(is_valid(new_row,new_col,m,n)) {
                        if(grid[new_row][new_col]==0 and not visited[new_row][new_col][curr_cell[2]]) {
                            q.push({new_row,new_col,curr_cell[2]});
                            visited[new_row][new_col][curr_cell[2]]=true;
                        }else if(grid[new_row][new_col] and curr_cell[2] and not visited[new_row][new_col][curr_cell[2]-1]) {
                            q.push({new_row,new_col,curr_cell[2]-1});
                            visited[new_row][new_col][curr_cell[2]-1]=true;
                        }
                    }
                }
            }
            steps++;
        }
        return -1;
    }
};