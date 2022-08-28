class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
       int row=mat.size();
        int col=mat[0].size();
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>>mp;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                mp[i-j].push(mat[i][j]);
            }
        }
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                mat[i][j]=mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat ;     
    }
};