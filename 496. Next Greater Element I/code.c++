class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        int n = nums1.size();
        int n2 = nums2.size();
        vector<int> v;
        int a, b, c;
        int flag;
        for (int i = 0; i < n; i++)
        {

            for (int j = 0; j < n2; j++)
            {
                flag = 0;
                if (nums1[i] == nums2[j])
                {
                    for (a = j + 1; a < n2; a++)
                    {
                        if (nums2[a] > nums2[j])
                        {
                            v.push_back(nums2[a]);
                            flag = 1;
                            break;
                        }
                    }
                    if (flag == 0)
                        v.push_back(-1);
                }
            }
        }
        return v;
    }
};