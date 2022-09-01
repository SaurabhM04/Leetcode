class Solution {
public:
    void solve(string s,string op,vector<string>&v)
    {
      if(s.length()==0){
        v.push_back(op);
        return;
      }
        if(isalpha(s[0]))
        {
            string op1=op;
            string op2=op;
            op1.push_back(tolower(s[0]));
            op2.push_back(toupper(s[0]));
            s.erase(s.begin()+0);
            solve(s,op1,v);
            solve(s,op2,v);
            
        }
        else{
            string op3=op;
            op3.push_back(s[0]);
            s.erase(s.begin()+0);
            solve(s,op3,v);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
       vector<string>v;
        string op="";
        //op+=s[0];
       // s.erase(s.begin()+0);
        solve(s,op,v);
        return v;
    }
};