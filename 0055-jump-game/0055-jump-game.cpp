class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int end=n-1;
        if(n==1)
            return true;
        for(int i=n-2; i>=0; i--){
            if(i+nums[i]>=end)
                end=i;
            if(end==0)
                return true;
        }
        return false;
    }
};