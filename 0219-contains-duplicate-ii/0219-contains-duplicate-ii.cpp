class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
          // mp[nums[i]]=i;
        }
        for(int i=1; i<=n; i++)
        {            
            if(mp.find(nums[i-1])!=mp.end())
                if(abs(mp[nums[i-1]]-i)<=k)
                return true;            
            mp[nums[i-1]]=i;
        }
        return false;
    }
};