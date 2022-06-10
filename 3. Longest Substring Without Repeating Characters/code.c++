// ghatiya soln :(

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxi=0;
        int sum=0;
        if(n==0)
            return 0;
//         if(s[0]==' ')
//             return 1;
//         unordered_map<char,int>mp;
//         for(auto x:s)
//             mp[s[x]]++;
//         if(mp.size()==n)
//             return n;
       
//         for(int i=0; i<n; i++)
//         {
//              sum=1;
//          for(int j=i+1; j<n; j++)
//          {
//              if(s[i]==s[j])
//              {
//                maxi=max(maxi,sum);
//                break;
//              }
//              else
//              {
//                sum++;
//              }
//          }          
//         }
//         return maxi;
      
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