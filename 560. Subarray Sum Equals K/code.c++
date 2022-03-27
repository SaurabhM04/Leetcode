class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
       
        map<int,int> m;
        int sum = 0;
        int count = 0;
        int n = nums.size();

    for(int i=0;i<n;i++){
        sum += nums[i];
        int req = sum - k;
        if(sum == k){
            count += 1;
        }
        
       // auto itr = m.find(req);
        if(m.find(req) != m.end()){
            count += m[sum-k];
        }
    
           m[sum] = m[sum] + 1;
    }

     return count;
      
    }
};
