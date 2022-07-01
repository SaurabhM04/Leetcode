class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {
        vector<int> v, v1, v2;
        int n = bills.size();
        int sum = 0;

        for (int i = 0; i < n; i++)
        {

            if (bills[i] == 5)
            {
                sum++;
                v.push_back(bills[i]);
                continue;
            }
            else if (bills[i] == 10 && v.size() > 0)
            {
                v1.push_back(bills[i]);
                v.pop_back();
                sum++;
            }
            else if (bills[i] == 20 && v1.size() > 0 && v.size() > 0)
            {
                v.pop_back();
                v1.pop_back();
                sum++;
            }
            else if (bills[i] == 20 && v.size() >= 3)
            {
                sum++;
                v.pop_back();
                v.pop_back();
                v.pop_back();
            }
            else
            {
                return false;
            }
        }
        if (sum == n)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};