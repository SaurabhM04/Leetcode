class Solution {
    static bool cmp(pair<int,string>&a,pair<int,string>&b)
    {
      if(a.first!=b.first)
          return a.first>b.first;
        return b.second>a.second;
    }
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
      vector<pair<int,string>>v;
        int n=words.size();
        unordered_map<string,int>mp;
        for(auto x:words){
            mp[x]++;
        }
        for(auto x:mp){
            v.push_back(make_pair(x.second,x.first));
        }
        sort(v.begin(),v.end(),cmp);
        vector<string>s;
        int j=0;
        while(k--){
            s.push_back(v[j].second);
            j++;
        }
        return s;
    }
};