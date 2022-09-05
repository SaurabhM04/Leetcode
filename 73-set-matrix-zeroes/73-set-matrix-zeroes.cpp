class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(matrix[i][j]==0){
                   v.push_back({i,j});
                }
            }
        }
        for(int k=0; k<v.size();k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<m; j++)
                {
                  matrix[v[k].first][j]=0;
                    matrix[i][v[k].second]=0;
                }
            }
        }
        
        
        
    }
};