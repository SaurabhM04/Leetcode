class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
        vector<vector<int>>present(26,vector<int>(26,0));
        unordered_set<string>st(ideas.begin(),ideas.end());
        for(auto i:ideas) {
            char start=i[0];
            for(char ch='a';ch<='z';ch++) {
                i[0]=ch;
                if(st.find(i)==st.end()) present[start-'a'][i[0]-'a']++;
            }
        }
        long long int ans=0;
        for(int i=0;i<26;i++) {
            for(int j=0;j<26;j++) {
                ans+=present[i][j]*present[j][i];
            }
        }
        return ans;
    }
};