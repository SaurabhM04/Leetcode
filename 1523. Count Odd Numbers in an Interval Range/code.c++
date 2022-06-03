class Solution
{
public:
    int countOdds(int low, int high)
    {
        int sum = 0;
        int x = high - low;
        if (low % 2 != 0 && high % 2 != 0)
            return x / 2 + 1;
        else if (x % 2 != 0)
            return x / 2 + 1;
        else
            return x / 2;
    }
};