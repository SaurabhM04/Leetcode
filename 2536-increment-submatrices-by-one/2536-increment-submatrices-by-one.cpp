class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>ans(n,vector<int>(n,0));
        vector<vector<int>>diff(n,vector<int>(n+1,0));
        for(int i = 0 ; i < queries.size() ; i++)
        {
             int rstart = queries[i][0];
             int cstart = queries[i][1];
             int rend   = queries[i][2];
             int cend   = queries[i][3];

             for( int j = rstart ; j <= rend ; j++)
             {
                  diff[j][cstart]+=1;
                  diff[j][cend+1]-=1;
             } 

        }
        
        for(int i = 0 ; i < n ; i++)
        {
            for(int j = 0 ; j < n ;j++)
            {
                 if(j > 0)
                 {
                     diff[i][j]+=diff[i][j-1];
                 }

                 ans[i][j]=diff[i][j];
            }
        }

        return ans;
    }
};