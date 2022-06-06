// Sum of squares of digits always ends in 1 or 89.
// For example,

// 44 → 32 → 13 → 10 → 1 → 1
// 85 → 89 → 145 → 42 → 20 → 4 → 16 → 37 → 58 → 89
// Any chain that arrives at 1 or 89 will become stuck in an endless loop.
// So if the number is 89, we return false

class Solution
{
public:
    int digitSqSum(int n)
    {
        int sum = 0;
        while (n > 0)
        {
            sum += ((n % 10) * (n % 10));
            n = n / 10;
        }
        return sum;
    }

    bool isHappy(int n)
    {
        int temp = n;
        while (1)
        {
            if (temp == 89)
                return false;
            if (temp == 1)
                return true;
            temp = digitSqSum(temp);
        }
    }
};