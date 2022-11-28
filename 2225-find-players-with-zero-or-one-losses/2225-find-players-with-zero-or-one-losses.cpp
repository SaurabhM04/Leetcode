class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int,int>mp,mp1;
        vector<vector<int>>v(2);
        //vector<int>v2,v3;
        for(int i=0; i<matches.size(); i++)
        {
            mp[matches[i][0]]++;
            mp1[matches[i][1]]++;
        }
        for(auto x:mp1){
            if(x.second==1)
                v[1].push_back(x.first);
        }
        for(auto x:mp){
            if(mp1.find(x.first)==mp1.end())
                v[0].push_back(x.first);
        }
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        // v.push_back(v3);
        // v.push_back(v2);
        return v;
    }
};