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
class Solution {
    public:
    int maxLength(vector<string>& A) {
        vector<bitset<26>> dp = {bitset<26>()};
        int res = 0;
        for (auto& s : A) {
            bitset<26> a;
            for (char c : s)
                a.set(c - 'a');
            int n = a.count();
            if (n < s.size()) continue;

            for (int i = dp.size() - 1; i >= 0; --i) {
                bitset c = dp[i];
                if ((c & a).any()) continue;
                dp.push_back(c | a);
                res = max(res, (int)c.count() + n);
            }
        }
        return res;
    }
};