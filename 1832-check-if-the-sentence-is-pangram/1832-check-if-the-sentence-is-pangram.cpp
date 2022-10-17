class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char,int>mp;
        for(auto x:s)
          mp[x]++;
        if(mp.size()==26)
            return true;
        return false;
    }
};