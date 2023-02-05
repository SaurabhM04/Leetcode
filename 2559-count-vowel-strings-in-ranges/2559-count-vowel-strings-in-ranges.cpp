class Solution 
{
public:
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) 
    {
        set<char> vowels = {'a','e','i','o','u'};
        vector<int> prefix_sum, res;
        int cnt=0;
        
        for(auto x:words)
        {
            if(vowels.count(x[0]) && vowels.count(x[x.size()-1])) 
                cnt++;    
            prefix_sum.push_back(cnt);
        }
        
        for(auto x:queries)
        {
            if(x[0] == 0)
                res.push_back(prefix_sum[x[1]]);
            else
                res.push_back(prefix_sum[x[1]] - prefix_sum[x[0]-1]);
            
        }
        return res;
        
    }
};
// class Solution {
// public:
//     vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
//         vector<int>ans;
//         int n=queries.size();
//         for(int i=0; i<n; i++){
//             int sum=0;
//             for(int j=queries[i][0]; j<=queries[i][1]; j++){
//                 string s=words[j];
//                 if((s[0]=='a' || s[0]=='i' || s[0]=='o' || s[0]=='u' || s[0]=='e') && (s[s.size()-1]=='a' || s[s.size()-1]=='i' || s[s.size()-1]=='o' || s[s.size()-1]=='u' || s[s.size()-1]=='e'))
//                     sum++;
//             }
//             ans.push_back(sum);
//         }
//         return ans;
//     }
// };