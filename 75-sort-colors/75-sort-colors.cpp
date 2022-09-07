class Solution {
public:
    void sortColors(vector<int>& nums) {
       int n=nums.size();
        int w=0,b=0,r=0;
        for(int i=0; i<n; i++)
        {
           if(nums[i]==0)
               r++;
            else if(nums[i]==1)
                w++;
            else
                b++;
        }
        int i=0;
        while(r--){
         nums[i]=0;
            i++;
        }
        while(w--){
         nums[i++]=1;
        }
        while(b--){
         nums[i++]=2;
        }
    }
};