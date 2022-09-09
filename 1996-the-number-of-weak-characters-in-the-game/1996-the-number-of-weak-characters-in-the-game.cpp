class Solution {
public:
    static bool cmp(vector<int>&a,vector<int>&b)
    {
        if(a[0]==b[0]) return a[1]<b[1];
        return a[0]>b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end(),cmp);
        int maxdefence=INT_MIN,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i][1]<maxdefence)
            {
                ans++;
            }
            else 
            {
                maxdefence=nums[i][1];
            }
        }
        return ans ;
    }
};