class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        st.push({s[0],1});
        int n=s.size();
        string ans="";
        for(int i=1;i<n;i++) {
            if(not st.empty() and s[i]==st.top().first) {
                st.push({s[i],st.top().second+1});
            }else {
                st.push({s[i],1});
            }
            if(st.top().second==k) {
                int j=k;
                while(j--) {
                    st.pop();
                }
            }
        }
        while(not st.empty()) {
            ans+=st.top().first;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};