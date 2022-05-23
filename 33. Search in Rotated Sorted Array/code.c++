class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        //       int n=nums.size();
        //         int sum=0;

        //         for(int i=0; i<n; i++){
        //          if(nums[i]==target){
        //             // sum++;
        //              break;
        //          }
        //             else{
        //                 sum++;
        //             }
        //         }
        //         if(sum==n)
        //             return -1;
        //         return sum;

        int low = 0, high = nums.size() - 1;
        // sort(nums.begin(), nums.end());
        while (low <= high)
        {
            while (low < high && nums[low] == nums[low + 1])
            {
                low++;
            }
            while (low < high && nums[high] == nums[high - 1])
            {
                high--;
            }
            int mid = (low + high) / 2;

            if (nums[mid] == target)
                return mid;

            //         if( (nums[low] == nums[mid]) && (nums[high] == nums[mid]) )
            //         {
            //             ++low;
            //             --high;
            //         }

            if (nums[low] <= nums[mid])
            {
                if (target >= nums[low] && target <= nums[mid])
                    high = mid - 1;

                else
                    low = mid + 1;
            }

            else
            {
                if (target >= nums[mid] && target <= nums[high])
                    low = mid + 1;

                else
                    high = mid - 1;
            }
        }
        return -1;
    }
};