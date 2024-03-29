//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int canReach(int A[], int n) {
        // code here
        int end=n-1;
        if(n==1)
            return true;
        for(int i=n-2; i>=0; i--){
            if(i+A[i]>=end)
                end=i;
            if(end==0)
                return true;
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
// } Driver Code Ends