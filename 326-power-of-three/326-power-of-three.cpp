class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) {
            return false;
        }
       long long int max_power_three =pow(3,19);
        if(max_power_three%n==0) {
            return true;
        }
        return false;
           
    }
};