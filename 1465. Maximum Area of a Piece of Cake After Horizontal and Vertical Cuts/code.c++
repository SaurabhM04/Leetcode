class Solution
{
public:
    int maxArea(int h, int w, vector<int> &hori, vector<int> &ver)
    {

        sort(hori.begin(), hori.end());
        sort(ver.begin(), ver.end());
        int maxi;

        int x = max(hori[0], abs(hori[hori.size() - 1] - h));

        int y = max(ver[0], abs(ver[ver.size() - 1] - w));

        for (int i = 0; i < hori.size() - 1; i++)
        {
            x = max(x, hori[i + 1] - hori[i]);
        }

        int maxi2;
        for (int i = 0; i < ver.size() - 1; i++)
        {
            y = max(y, ver[i + 1] - ver[i]);
        }

        return (long)x * y % 1000000007;
    }
};
