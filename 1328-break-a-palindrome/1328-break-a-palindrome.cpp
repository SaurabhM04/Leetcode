class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n=palindrome.size();
        int flag=0;
        for(int i=0; i<n/2; i++)
        {
            if(palindrome[i]!='a')
            {
                palindrome[i]='a';
                flag=1;
                break;
            }
        }
         if(n==1 )
             return "";
         else if(flag==1)
         {
             return palindrome;   
         }
         else
            {
                palindrome[n-1]='b';
                return palindrome;
            }
    }
};