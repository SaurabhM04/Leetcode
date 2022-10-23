class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        long long int n=nums.size();
        long long int sq=(n*(n+1)*(2*n+1))/6,sum=(n*(n+1))/2;
        for(auto i:nums) {
            sq-=i*i;
            sum-=i;
        }
        return {(int)(sq/sum-sum)/2,(int)(sq/sum+sum)/2};
    }
};