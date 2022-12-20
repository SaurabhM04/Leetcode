class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
       
        map<int,int> m;
        int sum = 0;
        int count = 0;
        int n = nums.size();
        m[0]=1;
        for(int i=0;i<n;i++)
        {
            sum += nums[i];
            int rem =sum%k;
            if(rem<0)
                rem+=k;
            if(m.find(rem) != m.end())
                count += m[rem];
               m[rem]++;
        }

         return count; 
    }
};