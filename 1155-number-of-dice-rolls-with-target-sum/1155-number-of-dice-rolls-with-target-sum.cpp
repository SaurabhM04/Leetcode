class Solution {
       #define MOD 1000000007
public:
    int recur(int n,int k,int target,vector<vector<int>>&dp)
    {
     
        if(n==0 && target==0)
            return 1;
        
        if(n<0 || target<0)
            return 0;
         if(dp[n][target]!=-1)
        return dp[n][target];
        int sum=0;
        for(int i=1; i<=k; i++)
        {
               sum = (sum % MOD + recur(n-1,k,target-i,dp)%MOD)%MOD;
        }
        dp[n][target]=sum;
        return dp[n][target];
    }
    int numRollsToTarget(int n, int k, int target) 
    {
        int ans=0;
        vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
       recur(n,k,target,dp) ;
        return dp[n][target];
    }
};