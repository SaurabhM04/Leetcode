class NumArray
{
public:
  vector<int> v = {1};
  NumArray(vector<int> &nums)
  {
    int j = nums.size(), i = 0;
    ;
    int sum = 0;
    while (i < j)
    {
      sum += nums[i];
      v.push_back(sum);
      i++;
    }
  }

  int sumRange(int left, int right)
  {
    int k = v[right + 1] - v[left];
    return k;
  }
};
