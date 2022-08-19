class Solution {
public:
    bool isPalindrome(int x) {
        
        long num=x, res=0, rem;
        while(x>0){
            rem=x%10;
            res=res*10+rem;
            x=x/10;
        }
        if(num==res){
            return true;
        }
        else{
            return false;
        }
    }
};