class Solution
{
public:
  int findMin(vector<int> &nums)
  {
    int s = 0;
    int e = nums.size() - 1;
    if (nums[e] > nums[0])
    {
      return nums[0];
    }
    while (s < e)
    {
      int mid = s + (e - s) / 2;
      if (nums[mid] >= nums[0])
      {
        s = mid + 1;
      }
      else
      {
        e = mid;
      }
    }
    return nums[s];
  }
};