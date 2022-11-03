class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int>mp;
        for(auto i:words)
        {
            mp[i]++;
        }
        int flag=0;
        int maxi=0,res=0;
        for(int i=0; i<words.size();i++)
        {
            string tmp=words[i];
            reverse(tmp.begin(),tmp.end());
           
            if(mp.find(words[i])!=mp.end() && mp.find(tmp)!=mp.end())
            {
                if(tmp==words[i])
                {
                   int x=mp[tmp];
                    if(x%2==1)
                    {
                        maxi+=x-1;
                        flag=1;
                    }
                    else
                        maxi+=x;
                    mp.erase(tmp);
                }
                else
                {
                    res+=min(mp[words[i]],mp[tmp]);
                    mp.erase(words[i]);
                    mp.erase(tmp);
                }
            }
        }
        int ans=4*res+2*maxi;
        if(flag)return ans+2;
        else
            return ans;
    }
};