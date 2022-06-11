class Solution
{
public:
  string freqAlphabets(string s)
  {
    string sm = "";
    for (int i = 0; i < s.length(); i++)
    {
      if (i + 2 < s.length() && s[i + 2] == '#')
      {
        int t = (s[i] - '0') * 10 + (s[i + 1] - '0');
        sm += char(t + 'a' - 1);
        i += 2;
      }
      else
        sm += char(s[i] - '0' - 1 + 'a');
    }
    return sm;
  }
};