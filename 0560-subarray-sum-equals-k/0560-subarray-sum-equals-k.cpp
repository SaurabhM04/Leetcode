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
        m[sum]++;
    }

     return count;
        
        // int count  = 0;
        //    for(int i = 0;i<nums.size();i++){
        //           int sum = 0;
        //         for(int j = i;j<nums.size();j++){
        //               sum += nums[j]; 
        //             if(sum == k){
        //                 count++;
        //         }
        //      }   
        //    }
        // return count;
    }
};