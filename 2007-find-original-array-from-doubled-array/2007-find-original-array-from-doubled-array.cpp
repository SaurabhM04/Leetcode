class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        unordered_map<int,int>mp;
        vector<int>ans;
        for(auto i:changed) {
            mp[i]++;
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<changed.size();i++) {
            if(mp[changed[i]]) {
                if(mp.find(changed[i]*2)!=mp.end() and mp[changed[i]*2]) {
                    mp[changed[i]*2]--;
                    mp[changed[i]]--;
                    ans.push_back(changed[i]);
                }
            }
        }
        for(auto i:mp) {
            if(i.second!=0) {
                cout<<i.first<<"\t"<<i.second;
                return vector<int>() ;
            }
        }
        return ans;
    }
};