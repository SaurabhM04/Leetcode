class Solution {
public:
    int minCost(string colors, vector<int>& nt) {
        int mini=INT_MAX,sum=0;;;
        int n=colors.size();
        for(int i=0; i<n-1; i++)
        {
            if(colors[i]==colors[i+1]){
                mini=min(nt[i],nt[i+1]);
                nt[i+1]=max(nt[i],nt[i+1]);
                sum+=mini;
            }       
        }
        return sum;
    }
};