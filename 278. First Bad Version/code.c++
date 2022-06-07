// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int i = 0;
        long long int j = n;
        int s = 1;
        while (i <= j)
        {
            int mid = i + (j - i) / 2;
            if (isBadVersion(mid))
            {
                s = mid;
                j = mid - 1;
            }
            else
                i = mid + 1;
        }
        return s;
    }
};