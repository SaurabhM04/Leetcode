class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string sn=to_string(n);
        sort(sn.begin(),sn.end());
        int power2=1;
        for(int i=1;i<31;i++) {
            string check=to_string(power2);
            sort(check.begin(),check.end());
            if(check==sn) {
                return true;
            }
            power2*= 2;
        }
        return false;    
    }
};