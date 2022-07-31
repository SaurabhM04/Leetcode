// class Solution {
// public:
//     vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
//         unordered_map<char,int>mp,mp1;
//         for(int i=0; i<words2.size(); i++)
//         {
//             for(int j=0; j<words2[i].size(); j++)
//             {   
//                 if(mp.find(words2[i][j])==mp.end())
//                  mp[words2[i][j]]++;
//             }
//         }
//         vector<string>v;
//          for(int i=0; i<words1.size(); i++)
//         {
//              mp1=mp;
//             for(int j=0; j<words1[i].size(); j++)
//             {
//                if(mp1.find(words1[i][j])!=mp1.end())
//                 { 
//                    mp1[words1[i][j]]--;
//                }
//             }
//              int cnt=0;
//              for(auto I:mp1)
//                if(I.second>=1)
//                    cnt++;
//             // cout<<mp1.size()<<endl;
//              if(cnt==0)
//                  v.push_back(words1[i]);
//              mp1.clear();
//         }
//         return v;
//     }
// };
class Solution {
    public:

    vector<int> counter(string& word)
    {
        vector<int> count(26);
        
        for (char c : word)
            count[c - 'a']++;
        return count;
    }
    vector<string> wordSubsets(vector<string>& A, vector<string>& B)
    {
        vector<int> count(26,0), tmp(26,0);
        int i;
        for (string b : B) 
        {
            tmp = counter(b);
            for (i = 0; i < 26; ++i)
                count[i] = max(count[i], tmp[i]);
        }
        
        vector<string> res;
        for (string a : A) 
        {
            tmp = counter(a);
            
            for (i = 0; i < 26; ++i)
                if (tmp[i] < count[i])
                    break;
            if (i == 26)
                res.push_back(a);
        }
        return res;
    }

};