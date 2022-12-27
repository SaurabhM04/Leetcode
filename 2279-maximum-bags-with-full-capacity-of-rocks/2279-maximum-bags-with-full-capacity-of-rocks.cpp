class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int>v;
        for(int i=0;i<n; i++){
            v.push_back(capacity[i]-rocks[i]);
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0; i<v.size(); i++){
            if(v[i]==0){
                ans++;
                continue;
            }
            additionalRocks-=v[i];
            if(additionalRocks<0)
                break;
            ans++;
            //cout<<additionalRocks<<endl;
        }
        return ans;
    }
};