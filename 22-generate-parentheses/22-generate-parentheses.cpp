class Solution {
public:
    void solve(string op,int open ,int close,vector<string> &v )
    {
        if(close==0 && open==0)
        {
            v.push_back(op);
            return;
        }
        
        if(open)
        {
            string op1=op;
            op1.push_back('(');
            solve(op1,open-1,close,v);
        }
        if(close>open){
            string op2=op;
            op2.push_back(')');
            solve(op2,open,close-1,v);
        }
    }
    vector<string> generateParenthesis(int n) {
        int open=n;
        int close=n;
        vector<string>v;
        string op="";
        solve(op,open,close,v);
        return v;
    }
};