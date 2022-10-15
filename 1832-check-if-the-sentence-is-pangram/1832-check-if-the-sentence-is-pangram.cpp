class Solution {
public:
    bool checkIfPangram(string s) {
        int flag=0;
        map<char,int>mp;
        for(auto x:s)
          mp[x]++;
         
        if(mp.size()==26)
            return true;
        else
            return false;
    }
};