class Solution
{
public:
    int fib(int n)
    {

        int f[32];
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1)
        {
            return 1;
        }

        f[0] = 0;
        f[1] = 1;

        for (int i = 2; i <= n; i++)
        {
            // x=f(n);
            f[i] = f[i - 1] + f[i - 2];
        }
        return f[n];
    }
};