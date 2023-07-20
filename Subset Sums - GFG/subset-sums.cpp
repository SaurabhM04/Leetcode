//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int>ans;
    void solve(vector<int> &v, int i,int sum){
        if(i==v.size())
        return;
        solve(v,i+1,sum);
        sum+=v[i];
        ans.push_back(sum);
        solve(v,i+1,sum);
        //ans.pop_back();
        
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
//vector<int>ans;
        solve(arr,0,0);
        ans.push_back(0);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends