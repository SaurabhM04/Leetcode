class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word, vector<string>& word1) {
        string s="",s1="";
        for(int i=0; i<word.size(); i++)
        {
            int n=word[i].length()-1;
            int j=0;
            while(j<=n){
                s+=word[i][j];
                j++;
            }
        }
        for(int i=0; i<word1.size(); i++)
        {
            int n=word1[i].length()-1;
            int j=0;
            while(j<=n){
                s1+=word1[i][j];
                j++;
            }
        }
        if(s==s1)
            return true;
        return false;
    }
};