class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2) {
            return {};
        }
        unordered_map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++) {
            mp[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++) {
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
                return {};
            }
        }
        return ans;
    }
};