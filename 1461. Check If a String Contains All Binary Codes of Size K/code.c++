class Solution
{
public:
    bool hasAllCodes(string s, int k)
    {
        int n = s.length();
        int i = 0;
        if (s.size() < k)
            return false;
        string str = "";
        while (i < k)
        {
            str += s[i];
            i++;
        }
        int j = s.size();
        unordered_map<string, int> mp;
        while (i < j)
        {
            mp[str]++;
            str.erase(0, 1);
            str += s[i++];
        }
        mp[str]++;
        int sum = 1;
        for (int i = 1; i <= k; i++)
            sum *= 2;
        if (mp.size() == sum)
            return true;
        else
            return false;
    }
};