class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
            return true;
        else if(n==0)
            return false;
        int x=n%4;
        if(x)
            return false;
        int sum=0;
        while(n%4==0){
             n=n/4;
            
        }
        if(n==1)
            return true;
        else
            return false;
        
    }
};