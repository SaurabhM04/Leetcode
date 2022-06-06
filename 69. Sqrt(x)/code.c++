class Solution
{
public:
    int mySqrt(int x)
    {

        if (x == 0 || x == 1)
            return x;

        long i = 1, num = 1;
        while (num <= x)
        {
            i++;
            num = i * i;
        }
        return i - 1;
    }
};