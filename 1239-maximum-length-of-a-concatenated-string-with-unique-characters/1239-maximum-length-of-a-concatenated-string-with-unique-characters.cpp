class Solution {
public:
    void solve(int curr_index,vector<bool>st,vector<string>&arr,int &ans) {
        if(curr_index==arr.size()) {
            int ct=0;
            for(auto i:st) {
                if(i) {
                    ct++;
                }
            }
            ans=max(ct,ans);
            return;
        }
        solve(curr_index+1,st,arr,ans);
        for(auto i:arr[curr_index]) {
            if(!st[i-97]) {
                st[i-97]=true;
            }else {
                return;
            }
        }
        solve(curr_index+1,st,arr,ans);
    }
    int maxLength(vector<string>& arr) {
        vector<bool>st(26,false);
        int ans=0;
        solve(0,st,arr,ans);
        return ans;
    }
};