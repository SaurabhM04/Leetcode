class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>s_count(26,0),p_count(26,0),ans;
        int l=0,r=0,n=s.size(),window_size=p.size();
        for(auto i:p) {
            p_count[i-97]++;
        }
        while(r<n) {
            if(r-l+1==window_size) {
                s_count[s[r]-97]++;
                if(s_count==p_count) {
                    ans.emplace_back(l);
                }
                s_count[s[l]-97]--;
                l++;
                r++;
            }else {
                s_count[s[r]-97]++;
                r++;
            }
        }
        return ans;
    }
};