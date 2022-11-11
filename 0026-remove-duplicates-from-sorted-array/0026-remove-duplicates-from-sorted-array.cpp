// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//       int sum=0;
//       int i=0; 
//       if(nums.size()==1)
//         return nums.size();
//         int k=nums.size();
//       for(int i=0; i<nums.size(); i++){
//           if(nums[i]!=nums[i+1])
//               sum++;
//       }
//       if(sum+1==k)
//       return nums.size();
    
//       while(i<nums.size()){
//           if(nums[i]==nums[i+1]&&i<nums.size()-1){
//               nums.erase(nums.begin()+i);
//               //sum++;
//           }
//           else{
//               i+=1;
//           }
//       }
//       return nums.size();
//     }
// };
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
   
        int i=0;
        for(auto n : nums) {
            if(i<1 or n>nums[i-1]) {
                nums[i]=n;
                i++;
            }
        }
        return i;
    }
};