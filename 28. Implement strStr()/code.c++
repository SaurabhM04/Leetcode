class Solution
{
public:
    int strStr(string h, string s)
    {
        int n = h.length();
        int m = s.length();
        if (n < m)
            return -1;

        int i = 0;
        while (i <= n - m)
        {
            int j = 0;
            while (j < m)
            {
                if (h[i + j] != s[j])
                    break;
                j++;
            }
            if (j == m)
                return i;
            i++;
        }

        return -1;
    }
};