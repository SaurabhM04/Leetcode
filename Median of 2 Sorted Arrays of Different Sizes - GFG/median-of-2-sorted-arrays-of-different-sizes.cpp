//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& nums1, vector<int>& nums2)
    {
        // Your code goes here'
         vector<int> ms;
        
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                ms.push_back(nums1[i++]);
            } else {
                ms.push_back(nums2[j++]);
            }
        }
        while (i < nums1.size()) {
            ms.push_back(nums1[i++]);
        }
        while (j < nums2.size()) {
            ms.push_back(nums2[j++]);
        }
        
        int mid = ms.size()/2;
        bool twoEl = ms.size()%2 == 0;
        if (twoEl) {
            return double(ms[mid-1] + ms[mid]) / 2;
        } else {
            return ms[mid];
        }
    
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends