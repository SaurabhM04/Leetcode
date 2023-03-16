//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int s, int d){
        vector<char>num(d,'0');
        num[0]='1';
        int curr_sum=s-1;
        // cout<<curr_sum<<endl;
        for(int i=d-1;i>=0;i--) {
            if(i==0) curr_sum++;
            int digit=min(curr_sum,9);
            num[i]=('0'+digit);
            curr_sum-=digit;
            if(curr_sum==0) break;
        }
        // cout<<curr_sum<<endl;
        if(curr_sum!=0) return "-1";
        // cout<<num<<" ";
        bool found=false;
        for(int i=d-2;i>=0;i--) {
            if(num[i]!='9') {
                found=true;
                num[i]=(num[i]+1);
                num[i+1]=(num[i+1]-1);
                break;
            }
        }
        // cout<<num<<endl;
        
        if(found) {
            string st="";
            for(auto i:num) st+=i;
            
            return st;
        }
        return "-1";
        
        
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends