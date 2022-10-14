class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int> m;
        vector<int> v;
        int j=0,x=0;
        for(int i=1;i<nums.size();i++)
        {
            x=target-nums[j];
            if(x==nums[i])
            {
                v.push_back(j);
                v.push_back(i);
                return v;
            }
            else if(i==nums.size()-1)
            {
                j++;
                i=j;
            }
        }
        return v;
    }
};