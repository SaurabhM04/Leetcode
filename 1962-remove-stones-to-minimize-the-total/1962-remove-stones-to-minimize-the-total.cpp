class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q;
        int n=piles.size();
        for(int i=0; i<n; i++){
            q.push(piles[i]);
        }
        while(k--){
            int temp=q.top();
            q.pop();
            int temp2=ceil(((double)temp/2));
            q.push(temp2);
        }
        int ans=0;
        while(!q.empty()){
            ans+=q.top();
            q.pop();
        }
        return ans;
    }
};