class Solution {
public:
    int minOperations(int n) {
        int mid;
        if(n%2){
            int x=(n/2);
            mid=2*x+1;
        }
        else{
            int y=n/2;
            mid=(2*y);
        }
        int ans=0;
        for(int i=0; i<n/2; i++){
            ans+=(mid-(2*i+1));
        }
        return ans;
    }
};