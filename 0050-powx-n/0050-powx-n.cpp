class Solution {
public:
    double solve(double a,int b){
        if(b==0)
            return 1;
        if(b==1)
            return a;
        double ans=solve(a,b/2);
        if(b%2==0)
            return ans*ans;
        else
            return a*ans*ans;
    }
    double myPow(double x, int n) {
        
        if(n>=0)
            return solve(x,n);
        else
            return 1/solve(x,n);
        
    }
};