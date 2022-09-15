class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n=changed.size();
        if(n%2) {
            return {};
        }
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<n;i++) {
            mp[changed[i]]++;
        }
        sort(changed.begin(),changed.end());
        for(int i=0;i<n;i++) {
            if(mp[changed[i]]==0) continue;
            if(mp[changed[i]*2]==0) return {};
            mp[changed[i]]--;
            mp[changed[i]*2]--;
            ans.push_back(changed[i]);
                
        }
        return ans;
    }
};