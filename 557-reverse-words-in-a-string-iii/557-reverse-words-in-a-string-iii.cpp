class Solution {
public:
    string reverseWords(string s) {
       int n=s.size();
        string str="";
        string ans="";
        string last="";
        for(int i=0; i<n; i++)
        {
            if(s[i]!=' ' && i<n-1){
                str+=s[i];
            }
            else if(i==n-1){
                reverse(str.begin(),str.end());
                ans+=s[i]+str;
            }
            else{
                reverse(str.begin(),str.end());
                ans+=str+' ';
                str="";
            }
        }
        return ans;
    }
};