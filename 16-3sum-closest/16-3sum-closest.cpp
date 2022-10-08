class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        int ans=INT_MAX,res=0,mini=INT_MAX;
        for(int i=0; i<nums.size()-1;i++)
        {
                int num1=nums[i];
                int l=i+1,r=nums.size()-1;
                while(l<r)
                {
                    int sum=nums[l]+nums[r]+num1;
                    if(sum==target)
                        return sum;
                   if(abs(sum-target)<mini)
                   { 
                      mini=abs(sum-target);
                      ans=sum;
                   }
                    if(target<sum)
                    {
                       r--; 
                    }
                    else
                    {  
                        l++;
                        
                    }           
                }      
        }
      return ans;
    }
};