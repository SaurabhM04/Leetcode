class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>mp;
        for(auto x:tasks){
            mp[x]++;
        }
        int ans=0;
        for(auto x:mp){
            int cnt=x.second;
            if(cnt<2)
                return -1;
            if(cnt%3==0)
                ans+=cnt/3;
            else{
                ans+=(cnt/3)+1;
            }
        }
        return ans;
    }
};