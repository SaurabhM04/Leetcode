class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n=tokens.size();
        stack<string>st;
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                long long a=stoll(st.top());
                st.pop();
                long long b=stoll(st.top());
                st.pop();
                if(tokens[i]=="+") a=a+b;
                if(tokens[i]=="-") a=b-a;
                if(tokens[i]=="*") a=a*b;
                if(tokens[i]=="/") a=b/a;
                st.push(to_string(a));
            }
            else 
            {
                st.push(tokens[i]);
            }
        }
        
        return stoll(st.top());
    }
};