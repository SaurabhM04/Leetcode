class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if(word1.size()!=word2.size())
            return false;
        unordered_map<int,int>mp,mp1;
        for(auto x:word1)
            mp[x]++;
        for(auto x:word2)
            mp1[x]++;
        vector<char>v,v1;
        vector<int>v2,v3;
        for(auto x:mp){
            v.push_back(x.first);
            v2.push_back(x.second);
        }
        for(auto x:mp1){
            v1.push_back(x.first);
            v3.push_back(x.second);
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        
        return v==v1&&v2==v3;
    }
};