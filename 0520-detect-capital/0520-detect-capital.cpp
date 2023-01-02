class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int a=0,b=0,c=0;
        for(int i=0; i<n; i++){
            if(word[i]>='A'&&word[i]<='Z')
                a++;
            else
                b++;
        }
        if(word[0]>='A'&&word[0]<='Z')
            c=1;
        if(a==n||b==n||(b==n-1&&c))
            return true;
        return false;
    }
};