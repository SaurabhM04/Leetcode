class Solution
{
public:
  string longestPalindrome(string s)
  {

    int a, b, flag = 0, f = 0, max = 0;
    if (s.length() <= 1)
      return s;
    else
    {

      for (int i = 0; i < s.length(); i++)
      {
        for (int j = s.length(); j >= 0; j--)
        {
          if (s[i] == s[j])
          {
            a = i;
            b = j;
            flag = 1;
            while (a <= b)
            {
              if (s[a] == s[b])
              {
                a++;
                b--;
              }
              else
              {
                flag = 0;
                break;
              }
            }
            if (flag == 1 && (max < (j - i + 1)))
            {                  // if it is palindrome and longer than max
              max = j - i + 1; // set it to max
              f = i;
            }
          }
        }
      }
      return s.substr(f, max);
    }
  }
};