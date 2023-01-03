class Solution {
public:
    int minimumPartition(string s, int k) {
        int n=s.length();
        string str="";
        long long int temp=0;
        int res=0;
        for(int i=0; i<n; i++){
            if(s[i]-'0'>k)
                return -1;
            str+=s[i];
            stringstream x(str);
            x>>temp;
            if(temp>k){
                res++;
                str=s[i];
            }
        }
        
        res++;
        
        return res;
    }
};