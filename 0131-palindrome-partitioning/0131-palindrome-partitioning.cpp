class Solution {
public:
    bool ispalindrome(string s,int i,int j)
    {
        while(i<j)
        {
            if(s[i++]!=s[j--]) return false;
        }
        return true;
    }
    void rec(string s,int idx,vector<string>&op,vector<vector<string>>&ans)
    {
        if(idx>=s.size())
        {
            ans.push_back(op);
            return;
        }
        for(int i=idx;i<s.size();i++)
        {
            if(ispalindrome(s,idx,i)) 
            {
                op.push_back(s.substr(idx,i-idx+1));
                rec(s,i+1,op,ans);
                op.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>op;
        int idx=0;
        rec(s,idx,op,ans);
        return ans;
    }
};