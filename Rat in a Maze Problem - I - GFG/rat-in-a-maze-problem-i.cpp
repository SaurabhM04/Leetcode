//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    void dfs(int n,int curr_row,int curr_col,string curr_string,vector<string>&ans,vector<vector<int>>&matrix) {
        if(curr_row==-1 or curr_row==n or curr_col==-1 or curr_col==n or matrix[curr_row][curr_col]==-1 or matrix[curr_row][curr_col]==0) {
            return;
        }
        if(curr_row==n-1 and curr_col==n-1) {
            ans.emplace_back(curr_string);
            return;
        }
        matrix[curr_row][curr_col]=-1;
        dfs(n,curr_row+1,curr_col,curr_string+"D",ans,matrix);
        dfs(n,curr_row-1,curr_col,curr_string+"U",ans,matrix);
        dfs(n,curr_row,curr_col+1,curr_string+"R",ans,matrix);
        dfs(n,curr_row,curr_col-1,curr_string+"L",ans,matrix);
        matrix[curr_row][curr_col]=1;
    }
    vector<string> findPath(vector<vector<int>> &matrix, int n) {
        vector<string>ans;
        dfs(n,0,0,"",ans,matrix);
        return ans;
    }
};

    


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends