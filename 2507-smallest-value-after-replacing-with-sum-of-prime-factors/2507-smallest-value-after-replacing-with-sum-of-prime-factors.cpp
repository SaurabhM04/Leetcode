class Solution {
public:
    int smallestValue(int n) {
        int i=2;
        int ans=0;
        //int b=n;
        while(1){
            int b=n;
            while(n>1){
                if(n%i==0){
                    ans+=i;
                    n/=i;
                }
                else{
                    i++;
                }
            }
            
        if(ans==b)
            break;
        else{
            int a=ans;
            n=a;
            ans=0;
            i=2;
        }
        // else
        //     break;
        }
        return ans;
    }
};