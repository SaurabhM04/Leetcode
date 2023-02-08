class Solution {
public:
    int jump(vector<int>& nums) {
        int limit=0,maxi=-1,i=0,n=nums.size(),ans=0;
        while(i<n) {
            maxi=max(maxi,nums[i]+i);
            if(i==limit and limit!=n-1) {
                ans++;
                limit=maxi;
            }
            i++;
        }
        return ans;
    }
};