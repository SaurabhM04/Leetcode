class Solution
{
public:
    int countSubstrings(string s)
    {
        //        int count = 0;
        //         int length;
        //         bool flag;

        //         for(int i=0; i<s.size(); i++){
        //             for(int j=i; j<s.size(); j++){
        //                 length = j-i+1;
        //                 flag = false;
        //                 for(int k=0; k<length/2; k++){
        //                     if(s[i+k] != s[j-k]){
        //                         flag = true;
        //                         break;
        //                     }
        //                 }
        //                 if(!flag)
        //                     count++;
        int n = s.length();

        int left, right, count = 0;

        for (int i = 0; i < n; i++)

        {
            left = i;
            right = i;

            while (left >= 0 && right < n && s[left] == s[right])
            {
                count++;

                left--;
                right++;
            }
        }
        for (int i = 0; i < n; i++)

        {
            left = i - 1;
            right = i;

            while (left >= 0 && right < n && s[left] == s[right])
            {
                count++;

                left--;
                right++;
            }
        }

        return count;
    }
};