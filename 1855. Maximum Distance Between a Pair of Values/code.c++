class Solution
{
public:
  int maxDistance(vector<int> &nums1, vector<int> &nums2)
  {
    int i = 0, j = 0;
    int maxi = 0;
    while (true)
    {
      if (i == nums1.size() || j == nums2.size())
        break;
      if (nums2[j] >= nums1[i])
      {
        maxi = max(maxi, j - i);
        j++;
      }
      else
      {
        i++;
        j++;
      }
    }
    return maxi;
  }
};