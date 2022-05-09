class Solution
{
public:
    vector<string> letterCombinations(string digits)
    {
        unordered_map<char, vector<char>> mp;
        vector<string> ans;
        mp['2'] = {'a', 'b', 'c'};
        mp['3'] = {'d', 'e', 'f'};
        mp['4'] = {'g', 'h', 'i'};
        mp['5'] = {'j', 'k', 'l'};
        mp['6'] = {'m', 'n', 'o'};
        mp['7'] = {'p', 'q', 'r', 's'};
        mp['8'] = {'t', 'u', 'v'};
        mp['9'] = {'w', 'x', 'y', 'z'};

        int n = digits.length();
        if (n == 0)
            return {};
        if (n == 1)
        {
            auto it = mp[digits[0]];
            for (auto j : it)
            {
                string s = "";
                s += j;
                ans.push_back(s);
            }
        }
        else if (n == 2)
        {
            auto it1 = mp[digits[0]];
            auto it2 = mp[digits[1]];
            for (int i = 0; i < it1.size(); ++i)
            {
                char c = it1[i];
                for (int j = 0; j < it2.size(); ++j)
                {
                    char g = it2[j];
                    string s = "";
                    s += c;
                    s += g;
                    ans.push_back(s);
                }
            }
        }
        else if (n == 3)
        {
            auto it1 = mp[digits[0]];
            auto it2 = mp[digits[1]];
            auto it3 = mp[digits[2]];
            for (int i = 0; i < it1.size(); ++i)
            {
                char c = it1[i];
                for (int j = 0; j < it2.size(); ++j)
                {
                    char g = it2[j];
                    for (int k = 0; k < it3.size(); ++k)
                    {
                        char l = it3[k];
                        string s = "";
                        s += c;
                        s += g;
                        s += l;
                        ans.push_back(s);
                    }
                }
            }
        }
        else
        {
            auto it1 = mp[digits[0]];
            auto it2 = mp[digits[1]];
            auto it3 = mp[digits[2]];
            auto it4 = mp[digits[3]];
            for (int i = 0; i < it1.size(); ++i)
            {
                char c = it1[i];
                for (int j = 0; j < it2.size(); ++j)
                {
                    char g = it2[j];
                    for (int k = 0; k < it3.size(); ++k)
                    {
                        char l = it3[k];
                        for (int w = 0; w < it4.size(); ++w)
                        {
                            char r = it4[w];
                            string s = "";
                            s += c;
                            s += g;
                            s += l;
                            s += r;
                            ans.push_back(s);
                        }
                    }
                }
            }
        }

        return ans;
    }
};