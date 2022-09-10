class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int mini=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            mini=min(mini,prices[i]);
            if(prices[i]>mini)
            {
                maxprofit=max(maxprofit,prices[i]-mini);
            }
        }
        return maxprofit;
    }
};