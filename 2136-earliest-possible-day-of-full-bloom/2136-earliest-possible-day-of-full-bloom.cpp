class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
     
        vector<pair<int, int>> v;
        
        for (int i = 0; i < plantTime.size(); ++i)
            v.push_back(make_pair(growTime[i], plantTime[i]));
        
        sort(v.rbegin(),v.rend());
        
        int c=0,t=0;
        
        for (auto[g,p]:v) {
            c+=p; 
            t=max(t,c+g);
        }        
        return t;
    }
};