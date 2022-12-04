class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long int n=nums.size();
        long long int prefix[n];
        prefix[0]=nums[0];
        if(n==1)
            return 0;
        for(int i=1; i<n; i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        int mini=INT_MAX;
        long long int res=0;
        for(int i=0; i<n; i++){
            long long int avg1=prefix[i]/(i+1);
            long long int avg2=0;
            if(i!=n-1)
            avg2=(prefix[n-1]-prefix[i])/(n-i-1);
            long long int diff=abs(avg2-avg1);
            if(mini>diff)
            {
                mini=diff;
                res=i;
            }
        }
        return res;
    }
};