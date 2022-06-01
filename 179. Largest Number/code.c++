class Solution
{

    static bool check(string(a), string(b))
    {
        return a + b > b + a;
    }

public:
    string largestNumber(vector<int> &nums)
    {

        int y = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                y++;
        }
        if (y == nums.size())
            return "0";
        vector<string> s(nums.size(), "");
        for (int i = 0; i < nums.size(); i++)
        {
            s[i] = to_string(nums[i]);
        }
        sort(s.begin(), s.end(), check);
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            res = res + s[i];
        }
        return res;
    }
};
