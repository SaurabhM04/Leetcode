class Solution {
public:
    void solve(int index,vector<string> &v,string digits,string output,string mapping[])
    {
        if(index>=digits.size()){
            if(digits.size())
            {v.push_back(output);
            }
            return;
        }            
        for(auto k : mapping[digits[index]-'0'])
        {
            
            output+=k;
            solve(index+1,v,digits,output,mapping);
            output.pop_back();;
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>v;
        string output="";
        string mapping[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(0,v,digits,output,mapping);
        return v;
    }
};