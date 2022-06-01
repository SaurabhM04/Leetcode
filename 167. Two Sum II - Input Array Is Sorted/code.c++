class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {

        int m = 0;
        int s = nums.size() - 1;

        while (m < s)
        {
            if (nums[m] + nums[s] == target)
            {

                return {m + 1, s + 1};
                ;
            }
            else if (nums[m] + nums[s] < target)
            {
                m++;
            }
            else
            {
                s--;
            }
        }
        return {};

        // map<int,int> m;
        //   vector<int> v;
        //   for(int i=0;i<nums.size();i++)
        //   {
        //       if(m.find(target-nums[i])!=m.end())
        //       {
        //           v.push_back(m[target-nums[i]]+1);
        //           v.push_back(i+1);
        //           return v;
        //       }
        //       else
        //       {
        //       m[nums[i]]=i;
        //       //m[nums[i]]=i+1;
        //       }
        //   }
        //   return v;
    }
};