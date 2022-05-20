class Solution
{
public:
    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> ans;
        string s = words[0];
        ans.push_back(words[0]);
        sort(s.begin(), s.end());
        for (int i = 1; i < words.size(); i++)
        {
            string x = words[i];
            sort(x.begin(), x.end());
            if (s == x)
                continue;
            else
            {
                ans.push_back(words[i]);
                s = x;
            }
        }
        return ans;
    }
};