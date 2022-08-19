class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            while(nums[i]>0 && nums[i]<=n && nums[nums[i]-1]!=nums[i])
                swap(nums[nums[i]-1],nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1)
                return i+1;
        }
        return n+1;
        
    }
};

//O(n) space
// class Solution {
// public:
//     int firstMissingPositive(vector<int>& nums) {
//         unordered_map<int,int>freq;
//         for(auto i:nums) {
//             freq[i]+=1;
//         }
//         int i=1;
//         while(freq.find(i)!=freq.end()) {
//             i++;
//         }
//         return i;
//     }
// };