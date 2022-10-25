// class Solution {
// public:
//     void solve(int curr_index,vector<bool>st,vector<string>&arr,int &ans) {
//         if(curr_index==arr.size()) {
//             int ct=0;
//             for(auto i:st) {
//                 if(i) {
//                     ct++;
//                 }
//             }
//             ans=max(ct,ans);
//             return;
//         }
//         solve(curr_index+1,st,arr,ans);
//         for(auto i:arr[curr_index]) {
//             if(!st[i-97]) {
//                 st[i-97]=true;
//             }else {
//                 return;
//             }
//         }
//         solve(curr_index+1,st,arr,ans);
//     }
//     int maxLength(vector<string>& arr) {
//         vector<bool>st(26,false);
//         int ans=0;
//         solve(0,st,arr,ans);
//         return ans;
//     }
// };
// // class Solution {
// //     public:
// //     int maxLength(vector<string>& A) {
// //         vector<bitset<26>> dp = {bitset<26>()};
// //         int res = 0;
// //         for (auto& s : A) {
// //             bitset<26> a;
// //             for (char c : s)
// //                 a.set(c - 'a');
// //             int n = a.count();
// //             if (n < s.size()) continue;

// //             for (int i = dp.size() - 1; i >= 0; --i) {
// //                 bitset c = dp[i];
// //                 if ((c & a).any()) continue;
// //                 dp.push_back(c | a);
// //                 res = max(res, (int)c.count() + n);
// //             }
// //         }
// //         return res;
// //     }
// // };




// class Solution {
//     public:
//     int ans=0;
//     bool unique(string s)
//     {
//         set<char>st;
//         for(auto i:s)
//         {
//             if(st.count(i)) return false;
//             st.insert(i);
//         }
//         return true;
//     }
//     void rec(int idx,vector<string>&arr,string s)
//     {
//         if(!unique(s)) return ;
//         int sz=s.size();
//         ans=max(ans,sz);
//         for(int i=idx;i<arr.size();i++)
//         {
//             rec(i+1,arr,s+arr[i]);
//         }
//     }
//     int maxLength(vector<string>& A) {
//         rec(0,A,"");
//         return ans;
//     }
// };


class Solution {
public:
    // bool unique(string &s)
    // {
    //     set<char>st;
    //     for(auto &ch:s)
    //     {
    //         if(st.count(ch)) return false;
    //         st.insert(ch);
    //     }
    //     return true;
    // }
    void rec(string s,int idx,vector<string>&arr,int n,int &ans)
    {
        unordered_set<char>st(s.begin(),s.end());
        if(st.size()!=s.size()) return;
        int sz=s.size();
        ans=max(ans,sz);
        
        if(idx>=n) return ;
        
        rec(s+arr[idx],idx+1,arr,n,ans); // take 
        rec(s,idx+1,arr,n,ans); // not take
    }
    int maxLength(vector<string>& arr) {
        int n=arr.size(),ans=0;
        rec("",0,arr,n,ans);
        return ans;
    }
};