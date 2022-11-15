class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<pair<int,int>>v;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto x:mp){
             v.push_back(x);
        }
        sort(v.begin(),v.end());
        int cnt=mp.size()-1;
        int ans=0;
        for(int i=v.size()-1; i>0; i--){
            ans+=(cnt*v[i].second);
            cnt--;
        }
       
        return ans;
    }
};