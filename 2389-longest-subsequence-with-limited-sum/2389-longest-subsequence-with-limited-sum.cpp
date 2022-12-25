class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int>v;
        sort(nums.begin(),nums.end());
        for(int i=0; i<m; i++){
            long long int sum=0;
            int cnt=0;
            for(int j=0; j<n; j++){
                sum+=nums[j];
                if(sum<=queries[i])
                    cnt++;
                else
                    break;
            }
            v.push_back(cnt);
        }
        return v;
    }
};