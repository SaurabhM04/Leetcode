class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       unordered_map<char, int> mp;
        for (auto x:magazine)
            mp[x]++;
        int cnt;
        for (int j = 0; j < ransomNote.size(); j++){
             
            if (--mp[ransomNote[j]] < 0)
                return false;
                
        }
        return true;
    }
};