class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
       vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            v.push_back(make_pair(efficiency[i],speed[i]));
        }
        sort(v.begin(),v.end());
        priority_queue<int,vector<int>,greater<int>>q;
        long sum=0,ans=0;
        for(int i=n-1;i>=0;i--)
        {
            sum+=v[i].second;
            q.push(v[i].second);
            if(q.size()>k)
            {
                sum-=q.top();
                q.pop();
            }
            ans=max(ans,sum*(v[i].first));
        }
        return ans%1000000007;
    }    
};