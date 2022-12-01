class Solution {
public:
    bool halvesAreAlike(string s) {
        int dict[256] = {0};
        dict['a'] = 1, dict['A'] = 1;
        dict['e'] = 1, dict['E'] = 1;
        dict['i'] = 1, dict['I'] = 1;
        dict['o'] = 1, dict['O'] = 1;
        dict['u'] = 1, dict['U'] = 1;
        int count_1=0,count_2=0;
        for(int i=0; i<s.size()/2; i++){
            if(dict[s[i]]==1)
                count_1++;
        }
        for(int i=s.size()/2; i<s.size(); i++){
            if(dict[s[i]]==1)
                count_2++;
        }
        if(count_1==count_2)
            return true;
        return false;
    }
};