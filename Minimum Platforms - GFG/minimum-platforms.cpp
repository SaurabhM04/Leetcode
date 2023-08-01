//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
    	vector<pair<int,int>> v;
    	for(int i=0; i<n; i++){
    	    v.push_back(make_pair(arr[i],0));
    	    v.push_back(make_pair(dep[i],1));
    	}
    	sort(v.begin(),v.end());
    	int maxi=0,sum=0;
    	for(int i=0; i<v.size(); i++){
    	    if(v[i].second==0)
    	    {
        	    sum++;
        	    maxi=max(sum,maxi);
    	    }
    	    else{
    	          sum--;
    	    }
    	}
    	return maxi;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends