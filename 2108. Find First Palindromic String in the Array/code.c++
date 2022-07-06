class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {

        int n = words.size();
        for (int i = 0; i < n; i++)
        {
            string str = words[i];
            string temp = str;

            reverse(temp.begin(), temp.end());
            if (str == temp)
                return str;
        }
        return "";
    }
};