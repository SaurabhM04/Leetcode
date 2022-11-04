class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0; 
        while(i<=n){
            if((s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='e'||s[i]=='u'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='E'||s[i]=='U')&&(s[n]=='A'||s[n]=='I'||s[n]=='O'||s[n]=='E'||s[n]=='U'||s[n]=='a'||s[n]=='i'||s[n]=='o'||s[n]=='e'||s[n]=='u')){
                swap(s[i],s[n]);
                i++;
                n--;
            }
            else if(s[i]!='a'&&s[i]!='i'&&s[i]!='o'&&s[i]!='e'&&s[i]!='u'&&s[i]!='A'&&s[i]!='I'&&s[i]!='O'&&s[i]!='E'&&s[i]!='U')
                i++;
            else
                n--;
        }
        return s;
    }
};