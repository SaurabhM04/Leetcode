class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int> ans;
        int carry = 0, i = num.size()-1;
        while(i>=0 || carry > 0 || k!=0){
            if(k!=0){
                carry += k%10;
                k/=10;
            }
            if(i>=0){
                carry+=num[i];
                i--;                
            }
            ans.push_back(carry%10);
            carry/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};