class Solution {
public:
    long long minOperations(vector<int>& nums1, vector<int>& nums2, int k) {
        int n=nums1.size();
        long long int sum=0,sum2=0;
        for(int i=0; i<n; i++){
            sum+=nums1[i];
            sum2+=nums2[i];
        }
        if(sum!=sum2)
            return -1;
        long long int dif=0;
        for(int i=0; i<n; i++){
            dif+=abs(nums1[i]-nums2[i]);
            if((abs(nums1[i]-nums2[i])<k && nums1[i]!=nums2[i]) || ( k!=0 && abs(nums1[i]-nums2[i])%k!=0 )){
                return -1;
            }
        }
        if(dif && k==0)
            return -1;
        if(k==0 && !dif)
            return 0;
        if(dif%k==0){
            long long int m=dif/k;
            if(m%2==0)
                return m/2;
        }
        return -1;
    }
};