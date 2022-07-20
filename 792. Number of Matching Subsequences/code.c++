class Solution
{
public:
    int numMatchingSubseq(string s, vector<string> &words)
    {

        int n = s.size(), sum = 0;
        unordered_map<string, int> m;
        for (auto x : words)
        {
            m[x]++;
        }
        for (auto y : m)
        {
            string str = y.first;
            int k = str.size();
            int i = 0, j = 0;
            while (i < n && j < k)
            {
                s[i] != str[j] ? i++ : (i++, j++);
            }
            if (j == k)
                sum += y.second;
        }
        return sum;
    }
};