//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> nums, int n) {
	    // code here
	    long long  i=0,j=nums.size();
        long   long  left=1,right=1;
        long long ans=INT_MIN;
        while(i<j){
            left*=nums[i];
            ans = max(left,ans);
            if(left==0)
            left=1;
            i++;
        }
        j--;
        while(j>=0){
            right*=nums[j];
            ans = max(right,ans);
            if(right==0)
            right=1;
            j--;
        }
        return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends