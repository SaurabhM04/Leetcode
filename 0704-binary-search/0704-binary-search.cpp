class Solution {
public:
    int search(vector<int>& nums, int target) {
     
        int sum =  0;
        int r = nums.size() - 1;
        while(sum<=r){
            int mid = sum + (r-sum)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] < target){
                sum = mid + 1;
            }else{
                r = mid - 1;
            }
        }
        return -1;
    }
};


