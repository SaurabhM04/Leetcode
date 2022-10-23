class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
      
        int n=nums.size();
        unordered_map<int,int>m;
        int ini_sum = accumulate(nums.begin(), nums.end(), 0);
        for(auto x:nums)
            m[x]++;
        vector<int>v;
        for(auto x:m)
        {
            if(x.second==2)
                v.push_back(x.first);
        }
        int sum=ini_sum-v[0];
        
        
        int req_num = (n+1) * (n)/2 - sum;
        v.push_back(req_num);
        return v;
        
    }
};