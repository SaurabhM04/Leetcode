class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int>greatest_index;
        for(int i=0; i<s.size(); i++)
        {
            greatest_index[s[i]]=i;
        }
        vector<bool>visited(s.size(),false);
        stack<char>st;
        for(int i=0; i<s.size(); i++) {
            if (visited[s[i]-'a']) {
                continue;
            }
            while((not st.empty()) and st.top()>s[i] and greatest_index[st.top()]>i)
            {
                visited[st.top()-'a']=false;
                st.pop();
                
            }
            st.push(s[i]);
            visited[st.top()-'a']=true;
        }
        string ans="";
        while (not st.empty()) {
            ans+=st.top();
            st.pop();        
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }       
};