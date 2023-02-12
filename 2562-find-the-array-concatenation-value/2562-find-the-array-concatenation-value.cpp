class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int i=0; 
        int j=nums.size()-1;
        long long int ans=0;
        while(i<j){
            string s=to_string(nums[j]);
            int k=s.size();
            int digit=pow(10,k);
            int req_num=digit*nums[i];
            ans+=nums[j]+req_num;
            i++;
            j--;
        }
        if(nums.size()%2==0)
            return ans;
        else
            return ans+nums[(nums.size()/2)];
    }
};