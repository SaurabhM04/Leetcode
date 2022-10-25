class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word, vector<string>& word1) {
        string s="",s1="";
        // for(int i=0; i<word.size(); i++)
        // {
        //     int n=word[i].length()-1;
        //     int j=0;
        //     while(j<=n){
        //         s+=word[i][j];
        //         j++;
        //     }
        // }
        // for(int i=0; i<word1.size(); i++)
        // {
        //     int n=word1[i].length()-1;
        //     int j=0;
        //     while(j<=n){
        //         s1+=word1[i][j];
        //         j++;
        //     }
        // }
        // return s==s1;
        for(auto x:word)
            s+=x;
        for(auto x:word1)
            s1+=x;
        return s==s1;
    }
};