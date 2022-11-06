class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       long long int j=0,i=0;
        long long int n=nums.size();
        unordered_map<long long int,long long int>mp;
        long long int sum=0,ans=0;
        while(j<n)
        {
            sum+=nums[j];
            mp[nums[j]]++;
            if(j-i+1==k)
            {
                if(mp.size()==k)
                    ans=max(ans,sum);
                sum-=nums[i];
                mp[nums[i]]--;
                if(mp[nums[i]]==0)
                    mp.erase(nums[i]);
                i++;
            }
            j++;
        }
        return ans;
    }
};