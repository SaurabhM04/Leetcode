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
    vector<vector<int>> ans;  
    void sub(vector<int> &nums, int i, vector<int> temp)
    {
        if(i==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        
        sub(nums, i+1, temp);
        temp.push_back(nums[i]);
        sub(nums, i+1, temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;       
        sub(nums, 0, temp); // or sub(nums, 0, vector<int> {});
        return ans;
    }
};

