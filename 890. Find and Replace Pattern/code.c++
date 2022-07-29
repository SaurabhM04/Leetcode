class Solution
{
public:
    vector<string> findAndReplacePattern(vector<string> &words, string pattern)
    {

        int n = words.size();
        vector<int> v;
        unordered_map<char, int> mp1;
        for (auto y : pattern)
        {
            mp1[y]++;
        }
        vector<string> s;

        for (int i = 0; i < n; i++)
        {
            unordered_map<char, set<char>> mp;
            mp.clear();
            int j = 0;
            unordered_map<char, int> m1;
            for (auto x : words[i])

            {
                vector<char> v;
                m1[x]++;
                if (j > pattern.size())
                    continue;
                mp[pattern[j]].insert(x);
                j++;
            }

            int flag = 0;
            if (mp1.size() != m1.size())
                flag = 1;

            for (auto k : mp)
            {
                if (k.second.size() > 1)
                    flag = 1;
            }
            if (!flag)
                s.push_back(words[i]);
        }
        return s;
    }
};