class Solution {
public:
    vector<int> diStringMatch(string s) {
        
        stack<int>st;
        vector<int>ans;
        for(int i=0; i<=s.size(); i++)
        {
            st.push(i);
            if(i==s.size() || s[i]=='I')
            {  
                // ans.push_back(st.top());
                // st.pop();
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
            }
        }
        return ans;        
    }
};