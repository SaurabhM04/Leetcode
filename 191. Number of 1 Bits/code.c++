class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        // int sum=0;
        //    while(n){
        //      sum+=n%2;
        //        n=n>>1;
        //    }
        //    return sum;
        int sum = 0;
        while (n)
        {
            n = n & (n - 1);
            sum++;
        }
        return sum;
    }
};