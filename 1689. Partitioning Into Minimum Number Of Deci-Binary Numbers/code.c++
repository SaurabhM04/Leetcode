class Solution
{
public:
    int minPartitions(string n)
    {

        int x = 0;
        for (int i = 0; i < n.size(); i++)
        {
            if (n[i] - '0' > x)
                x = n[i] - '0';
        }
        return x;
    }
};