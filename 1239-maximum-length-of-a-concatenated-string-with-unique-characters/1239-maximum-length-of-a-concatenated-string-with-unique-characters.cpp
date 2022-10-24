class Solution {
public:
    void solve(int curr_index,unordered_set<char>st,vector<string>&arr,int &ans) {
        if(curr_index==arr.size()) {
            ans=max<int>(ans,st.size());
            return;
        }
        solve(curr_index+1,st,arr,ans);
        for(auto i:arr[curr_index]) {
            if(st.find(i)==st.end()) {
                st.insert(i);
            }else {
                return;
            }
        }
        solve(curr_index+1,st,arr,ans);
    }
    int maxLength(vector<string>& arr) {
        unordered_set<char>st;
        int ans=0;
        solve(0,st,arr,ans);
        return ans;
    }
};