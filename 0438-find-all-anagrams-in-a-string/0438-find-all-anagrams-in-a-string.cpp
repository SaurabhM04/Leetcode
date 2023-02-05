class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>window_s(26,0),freq_p(26,0);
        vector<int>ans;
        int l=0,r=0;
        for(auto x:p)
            freq_p[x-97]++;
        for(int i=0; i<s.size(); i++){
            if(r-l+1==p.size())
            {
                window_s[s[r]-97]++;
                if(freq_p==window_s)
                ans.push_back(l);
                window_s[s[l]-97]--;
                l++;
                r++;
            }
            else{
                window_s[s[r]-97]++;
                r++;
            }
        }
        return ans;
    }
};