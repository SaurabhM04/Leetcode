class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxi=0;
        int sum=0;
        if(n==0)
            return 0;
       for(int i=0;i<s.length();i++)
       {
         int sum=0;
        unordered_map<char,int> mp;
       for(int j=i;j<n;j++)
       {
         mp[s[j]]++;
        if(mp[s[j]]==2)
          break;
        else
          sum++;
       }
        maxi=max(maxi,sum);
       }
       return maxi;
    }
};