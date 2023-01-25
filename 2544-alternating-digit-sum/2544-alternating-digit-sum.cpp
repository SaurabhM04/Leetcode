class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>v;
        while(n){
            int digit=n%10;
            v.push_back(digit);
            n/=10;
        }
        reverse(v.begin(),v.end());
        int ans=0;
        for(int i=0; i<v.size(); i++){
            if(!(i%2))
                ans+=v[i];
            else
                ans-=v[i];
        }
        return ans;
    }
};