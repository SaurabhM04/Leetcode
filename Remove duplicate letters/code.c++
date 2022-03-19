class Solution {
public:
    string removeDuplicateLetters(string s) {
         int n=s.length();
        stack<char> st;
        vector<int> freq(26,0);
        vector<bool>visited(26, false);
        string ans="";
        for(auto c: s)
            freq[c-'a']++;
        for(auto c:s)
        {
            freq[c-'a']--;
            if(visited[c-'a']) 
                continue;
            while(!st.empty() and c<st.top() and freq[st.top()-'a']>0)
            {
                visited[st.top()-'a']=false;
                st.pop();
            }
            st.push(c);
            visited[c-'a']=true;
        }
        while(!st.empty())
        {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans; 
    }
};