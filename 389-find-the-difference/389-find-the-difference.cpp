class Solution {
public:
    char findTheDifference(string s, string t) {
        // sort(s.begin(), s.end());
        //  sort(t.begin(), t.end());
        // int n=t.length();
        // vector<char>v;
        // for(int i=0; i<n; i++)
        // {
        //   if(s[i]!=t[i]){
        //     v.push_back(t[i]);
        //       break;
        //   }
        //     else
        //     {
        //         continue;
        //     }
        // }
        // return v[0];
        unordered_map<char,int>ms,ms1;
        for(auto x:s)
            ms[x]++;
        for(auto x:t)
            ms[x]--;
        // for(auto x:ms1)
        // {
        //     if(ms.find(x.first)==ms.end()){
        //         return x.first;
        //         break;
        //     }
        // }
        for(auto x:ms)
        {
            if(x.second==-1){
                return x.first;
                break;
            }
        }
        return 'z';
    }
};