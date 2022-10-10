//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
       int n = nums.size(), p = 1 << n;
         vector<vector<int>> subs(p);
         for (int i = 0; i < p; i++) {
             for (int j = 0; j < n; j++) {
                 if ((i >> j) & 1) {
                     subs[i].push_back(nums[j]);
                 }
             }
         }
         sort(subs.begin(),subs.end());
         return subs;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends