class Solution
{
public:
  char findTheDifference(string s, string t)
  {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    int n = t.length();
    vector<char> v;
    for (int i = 0; i < n; i++)
    {
      if (s[i] != t[i])
      {
        v.push_back(t[i]);
        break;
      }
      else
      {
        continue;
      }
    }
    return v[0];
  }
};