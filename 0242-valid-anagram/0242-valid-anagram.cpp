class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>m,m1;
        if(s.size()!=t.size())
            return false;
        for(int i=0; i<s.size(); i++){
            m[s[i]]++;
            m1[t[i]]++;
        }
        return m==m1;
    }
};