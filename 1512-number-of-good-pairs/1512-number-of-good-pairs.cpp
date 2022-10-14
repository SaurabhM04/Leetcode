class Solution {
public:

    int result(int n)
    {

        if(n <= 1)
        {
            return 0;
        }
        if(n == 2)
        {
            return 1;
        }
        if(n == 3)
        {
            return 3;
        }
        return result(n-1) + (n-1);
    }
    int numIdenticalPairs(vector<int>& nums)
    {
        int count = 0;
        unordered_map<int,int> mp;
        for(auto x:nums)
        {
            mp[x]++;
        }
        // for(int i = 0; i<nums.size(); i++)
        // {
        //     mp[nums[i]]++;
        // }
        for(auto x:mp)
        {
            int n = result(x.second);
            count += n;
        }
        return count;
        
    }
};