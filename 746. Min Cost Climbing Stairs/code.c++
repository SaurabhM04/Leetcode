class Solution
{
public:
    int minCostClimbingStairs(vector<int> &cost)
    {

        int n = cost.size();
        int a = cost[0];
        int b = cost[1];
        int sum = 0, mini = 0;

        for (int i = 2; i < n; i++)
        {

            mini = min(a, b) + cost[i];

            a = b;
            b = mini;
        }

        return min(a, b);
    }
};