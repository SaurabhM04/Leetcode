// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
      
        // int n = nums.size();
        // vector<vector<int>> v = {{}};
        // for (int i = 0; i < n; i++) {
        //     int s = v.size();
        //     for (int j = 0; j < s; j++) {
        //         v.push_back(v[j]);
        //         v.back().push_back(nums[i]);
        //     }
        // }
        // return v;
         
        // if(nums.empty())
        //     return {{}};
        // int n = nums.size();
        // vector<vector<int>> v = {{}};
        // for (int i = 0; i < n; i++) {
        //     int s = v.size();
        //     for (int j = 0; j < s; j++) {
        //         vector<int> m = v[j];
        //         m.push_back(nums[i]);
        //         v.push_back(m);
        //     }
        // }
        // return v;
        
//     }
// };
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        ans.push_back({});
        for(auto ele:nums) {
            int s=ans.size();
            for(int i=0;i<s;i++) {
                vector<int>k=ans[i];
                k.push_back(ele);
                ans.push_back(k);    
            }       
        }
        return ans;
    }
};

