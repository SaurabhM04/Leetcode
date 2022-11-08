class Solution {
public:
    string makeGood(string s) {
        int i=0;
        while(i<s.size()) {
            if(i<s.size()-1 and (s[i]==char(s[i+1]+32) or s[i]==char(s[i+1]-32))) {
                s.erase(i,2);
                i=max(0,i-1);
            }else {
                i+=1;
            }  
        }
        return s;
    }
};