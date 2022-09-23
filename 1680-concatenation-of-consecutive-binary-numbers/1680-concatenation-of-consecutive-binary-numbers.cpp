class Solution {
public:
    int concatenatedBinary(int n) {
        long long int MOD=1e9+7;
        long long int ans=0;
        long long int shift=0;
        for(long long int i=1;i<=n;i++) {
            if((i&(i-1))==0) {
                shift+=1;
            }
            ans=((ans<<shift)|i)%MOD;
        }
        return ans;
    }
};