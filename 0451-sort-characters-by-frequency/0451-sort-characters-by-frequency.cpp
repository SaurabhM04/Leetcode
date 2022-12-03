class Solution {
    // static bool cmp(pair<int,int>&a, pair<int,int>&b)
    // {
    //     return  (a.first==b.first) ? a.second>b.second : a.first<b.first;
    // }
public:
    string frequencySort(string s) {
        
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }
        
        vector <pair<int,int>> v;
        for(auto x:mp){
            v.push_back(make_pair(x.second,x.first));
        }
        
        sort(v.begin(),v.end());
        
        string str="";
        for(int i=v.size()-1; i>=0; i--)
        {
           while(v[i].first--){
               str+=v[i].second;
           } 
        }
        
        return str;
        
    }
};