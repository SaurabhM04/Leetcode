class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       
        vector<int>a;
        int b = n, i=0;
        
        while( i<n && b<nums.size() ){
            a.push_back(nums[i]);
            i++;
            a.push_back(nums[b]);
            b++;
        }
        return a;
        
    }
};