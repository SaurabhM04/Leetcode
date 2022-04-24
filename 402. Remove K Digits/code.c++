class Solution {
public:
    string removeKdigits(string num, int k) {
    
    int n = num.size();
    string s = "";                                           
    s += num[0];                                              \
    for(int i=1; i<n; i++){
        while(s.size() != 0 && num[i] < s.back() && k>0){
            s.pop_back();
            k--;
        }
        if(s.size() >= 1 || num[i] != '0'){                    
            s += num[i];
        }
    }
    while(s.size() && k){                                     
        s.pop_back();
        k--;
    }
    return s.size() == 0 ? "0" : s; 
    }
};