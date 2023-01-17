class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int zero=0,one =0;;
        for(auto x:s){
            if(x=='0')
                zero++;
            if(x=='1')
                one++;
            zero=min(zero,one);
        }
        return zero;
    }
};