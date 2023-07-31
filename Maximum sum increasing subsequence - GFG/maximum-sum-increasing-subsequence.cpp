//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
		

	public:
	
	int solve(int curr,int prev,int arr[],int n,vector<vector<int>>&dp) {
	    if(curr==n) return 0;
	    
	    if(dp[curr][prev+1]!=-1) return dp[curr][prev+1];
	    
	    int not_take = solve(curr+1,prev,arr,n,dp),take=0;
	    if(prev==-1 or arr[curr]>arr[prev]) {
	        take = arr[curr]+solve(curr+1,curr,arr,n,dp);
	    }
	    return dp[curr][prev+1]=max(take,not_take);
	}
	
	int maxSumIS(int arr[], int n)  
	{  
	    vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
	    return solve(0,-1,arr,n,dp);
	    
	}  
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

      

	    Solution ob;
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends