class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        st.push(s[0]);
        for(int i=1; i<s.size(); i++){
            if(!st.empty()&&s[i]==st.top())
                st.pop();
            else
                st.push(s[i]);
        }
        string str="";
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};