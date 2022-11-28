class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp,mp1;
        vector<vector<int>>v;
        vector<int>v2,v3;
        for(int i=0; i<matches.size(); i++)
        {
            mp[matches[i][0]]++;
            mp1[matches[i][1]]++;
        }
        for(auto x:mp1){
            if(x.second==1)
                v2.push_back(x.first);
        }
        for(auto x:mp){
            if(mp1.find(x.first)==mp1.end())
                v3.push_back(x.first);
        }
        sort(v2.begin(),v2.end());
        sort(v3.begin(),v3.end());
        v.push_back(v3);
        v.push_back(v2);
        return v;
    }
};