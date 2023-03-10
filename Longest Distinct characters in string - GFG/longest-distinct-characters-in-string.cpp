//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    // your code here'
    int maxi=INT_MIN;
    int sum=0;
    unordered_map<char,int>mp;
    int i=0,j=S.length(),l=0;
    while(i<j){
        int flag=0;
        mp[S[i]]++;
        sum++;
        if(mp.size()<sum){
        int k=mp.size();
        maxi=max(maxi,k);
        sum=0;
        mp.clear();
        l++;
        flag=1;
        }
        int h=mp.size();
        maxi=max(h,maxi);
        if(flag)
        i=l;
        else
        i++;
    }
    return maxi;
}