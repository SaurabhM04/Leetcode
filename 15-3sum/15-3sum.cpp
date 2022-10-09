class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
               sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>>s;
         if(nums.size() < 3) 
            return ans;
         if(nums[0] > 0 || nums[nums.size()-1] < 0) 
            return ans;
        for(int i=0; i<nums.size()-2; i++){
            int val = nums[i];
            int a= i+1;
            int b= nums.size()-1;
            while(a<b){
             int sum = val + nums[a]+nums[b];
                if(sum == 0){
                    s.insert({val,nums[a++],nums[b--]});
                }
                else if(sum<0){
                 a++;
                }
                else{
                    b--;
                    
                }
                
            }
            
        }
        for(auto x:s){
            ans.push_back(x);
        }
        return ans;
    }
};