class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        int m = 1e9+7;
        int q=queries.size();
        vector<int> v, ans;
        for(int i = 0; i < 32; ++i){
            if((n & (1<<i)) != 0) 
                v.push_back(1<<i);
        }
        for(int i=0; i<q; i++)
        {
            int j=queries[i][0];
            long long int k=v[j];
            j++;
            while(j<=queries[i][1]){
              k=(k*v[j])%m;
              j++; 
            }
            ans.push_back(k);
        }
        return ans;
    }
};