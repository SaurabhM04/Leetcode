class Solution {
public:
    int numSquares(int n) {
        vector<int>squares;
        for(int i=1;i*i<=n;i++) {
            squares.push_back(i*i);
        }
        int st=squares.size();
        vector<vector<int>>dp(st+1,vector<int>(n+1));
        for(int i=0;i<dp[0].size();i++) {
            dp[0][i]=10000;
        }
        for(int i=1;i<=st;i++) {
            for(int j=0;j<=n;j++) {
                if(j==0) {
                    dp[i][j]=0;
                }
                else if(squares[i-1]>j) {
                    dp[i][j]=dp[i-1][j];
                }else {
                    dp[i][j]=min(dp[i-1][j],1+dp[i][j-squares[i-1]]);
                }
            }
        }
        // for(auto i:dp) {
        //     for(auto j:i) {
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
       return dp[st][n]; 
    }
};