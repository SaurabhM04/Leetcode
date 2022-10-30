class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>v;
        //unordered_map<string,int>m;
        v.push_back(words[0]);
        int k=0;
        for(int i=1; i<words.size(); i++)
        {
            string s=words[i];
            sort(s.begin(),s.end());
            //cout<<s<<endl;
            string j=v[k];
            sort(j.begin(),j.end());
            if(j==s)
                continue;
            else
            {
                v.push_back(words[i]);
                k++;
            }
        }
        return v;
        
    }
};