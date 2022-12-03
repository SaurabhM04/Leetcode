class Solution {
    static bool cmp(pair<int,int>&a, pair<int,int>&b)
    {
        return  (a.first==b.first) ? a.second>b.second : a.first<b.first;
    }
    
public:
    vector<int> frequencySort(vector<int>& nums) {
      map<int,int>mp;
          for(auto x:nums){
              mp[x]++;
              
          }
        vector<int>v;
        vector <pair<int,int>> v1;
       for(auto y: mp){
           
              
              v1.push_back(make_pair(y.second,y.first));
          
        } 
        sort(v1.begin(),v1.end(),cmp);
        for(int i=0; i<v1.size(); i++){
            int m=v1[i].first;
            while(m--){
                 v.push_back(v1[i].second);
            }
        }
        return v;
    }
};