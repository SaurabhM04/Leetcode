class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {

        unordered_map<string, vector<string>> mp;
        int n = strs.size();
        string ans;

        for (int i = 0; i < n; i++)
        {
            ans = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mp[strs[i]].push_back(ans);
        }

        vector<vector<string>> res;

        for (auto itr = mp.begin(); itr != mp.end(); itr++)
        {

            res.push_back(itr->second);
        }

        return res;
    }
};