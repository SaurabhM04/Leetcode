class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
       int n=nums.size();
       unordered_map<int,int>mp;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            sum=sum%k;
            if(sum%k==0 && i>0)
                return true;
            if(mp.find(sum)!=mp.end())
            {
                if(i-mp[sum]>=2)
                    return true;
            }
            else
            mp[sum]=i;
        }
        return false;
    }
};