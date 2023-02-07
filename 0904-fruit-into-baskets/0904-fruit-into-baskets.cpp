class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0,j=0;
        int n=fruits.size();
        int ans=0;
        map<int,int>mp;
        while(j<n)
        {
            mp[fruits[j]]++;
            if(mp.size()>2)
            {
                mp[fruits[i]]--;
                if(mp[fruits[i]]==0) mp.erase(fruits[i]);
                i++;
            }
            else {
                ans=max(ans,j-i+1);
            }
            j++;
        }
        return ans;
    }
};