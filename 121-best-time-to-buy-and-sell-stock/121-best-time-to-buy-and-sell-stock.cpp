class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0,mini=INT_MAX;;
        // if(prices.size()==1)
        //       return 0;
        for(int i=0; i<prices.size(); i++)
        {
            mini=min(mini,prices[i]);
            maxi=max(maxi,prices[i]-mini);
        }
        // if(maxi<mini)
        //     return 0;
        return maxi;
    }
};