class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        
        unordered_map<string,int>mp;
        for(auto x:words){
            mp[x]++;
        }
        
        vector<int>ans;
        int n=words[0].size();
        int window=words[0].size()*words.size();
        for(int i=0; i<s.length()-window+1; i++)
        {
             unordered_map<string,int>mp1;
             for(int j=i; j<window+i; j+=n)
              { 
                  if(mp.find(s.substr(j,n))!=mp.end())
                  {
                      mp1[s.substr(j,n)]++;

                  }

              }
               if(mp1==mp){
                     ans.push_back(i); 
               }
            
        }
        return ans;
      
    }
};