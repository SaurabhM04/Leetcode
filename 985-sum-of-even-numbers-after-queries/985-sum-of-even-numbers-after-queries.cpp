class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& num, vector<vector<int>>& queries) {
        int curr_sum=0;
        vector<int>ans;
        for(auto i:num) {
            if(i%2==0) {
                curr_sum+=i;
            }
        } 
        for(auto i:queries) {
            if(num[i[1]]%2) {
                if(i[0]%2) {
                    num[i[1]]+=i[0];
                    curr_sum+=num[i[1]];
                }else {
                    num[i[1]]+=i[0];
                }
            }else {
                if(i[0]%2) {
                    curr_sum-=num[i[1]];
                    num[i[1]]+=i[0];
                }else {
                    curr_sum+=i[0];
                    num[i[1]]+=i[0];
                }
            }
            ans.emplace_back(curr_sum);
        }
        return ans;
    }
};