
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        
        stack<char>st,st1;
        for(int i=0; i<s.size(); i++){
            if(!st.empty() && s[i]=='#'){
                st.pop();
            }
            else if(s[i]!='#'){
                st.push(s[i]);
            }
        }
        for(int i=0; i<t.size(); i++){
            if(!st1.empty() && t[i]=='#'){
                st1.pop();
            }
            else if(t[i]!='#'){
                st1.push(t[i]);
            }
        }
        return st==st1;
        
    }
};