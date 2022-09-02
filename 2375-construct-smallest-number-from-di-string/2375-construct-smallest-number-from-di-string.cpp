class Solution {
public:
    string smallestNumber(string s) {
      stack<int>st;
        //vector<int>ans;
        string str="";
        for(int i=0; i<=s.length(); i++)
        {
            st.push(i+1);
            if(i==s.length() || s[i]=='I')
            {
                while(!st.empty())
                {
                    str+=(st.top()+'0');
                    //ans.push_back(st.top());
                    st.pop();
                }
            }
        }

        return str;
    }
};