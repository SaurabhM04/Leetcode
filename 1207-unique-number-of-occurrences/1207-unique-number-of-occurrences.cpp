class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m,m1;
        for(auto x:arr)
            m[x]++;
        for(auto x:m)
            m1[x.second]++;
        if(m1.size()==m.size())
            return true;
        return false;
    }
};