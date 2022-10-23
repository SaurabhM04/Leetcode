class Solution {
public:
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=n;
        int sum=0;
        while(i<=j)
        {
          int gcd=nums[i];;
          for(int m=i; m<j; m++)
          {
             gcd=__gcd(nums[m],gcd);
              if(gcd==k)
              {
                 sum++;
              }
          }
          i++;
        }
        return sum;
    }
};