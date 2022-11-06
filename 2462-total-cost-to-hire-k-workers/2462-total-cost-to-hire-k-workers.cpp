class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int c) {
        
        long long int n=costs.size();
        priority_queue <long long int, vector<long long int>, greater<long long int>> q,q1;    
        if(n<=2*c)
        {
            long long int s=0;
            sort(costs.begin(),costs.end());
            for(int i=0;i<k;i++)
            {
                s+=costs[i];
            }
            return s;
        }
        
        long long int ans=0;
        for(int i=0;i<c;i++)
        {
            q.push(costs[i]);
        }
        for(int i=n-c;i<n;i++)
        {
            q1.push(costs[i]);
        }
        
        int i=c,j=n-c-1;
        while(i<=j && k){
            if(q.top()<=q1.top()){
                ans+=q.top();
                k--;
                q.pop();
                q.push(costs[i]);
                i++;
            }
            else{
                ans+=q1.top();
                q1.pop();
                q1.push(costs[j]);
                k--;
                j--;
                }
            
        }
        while(!q.empty() && !q1.empty() && k>0){
                
                if(q.top()<=q1.top()){
                    ans+=q.top();
                    q.pop();
                    k--;
                }
                else{
                    ans+=q1.top();
                    q1.pop();
                    k--;
                }
                
         }
         while(!q.empty() && k>0){
             ans+=q.top();
             q.pop();
             k--;
           }
         while(!q1.empty() && k>0){
             ans+=q1.top();
             q1.pop();
             k--;
         } 
        
        return ans;
        
    }
};