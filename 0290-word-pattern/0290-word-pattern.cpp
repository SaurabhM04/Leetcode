class Solution {
public:
    bool wordPattern(string pattern, string s) {
      
        vector<string>v;
        int n=s.length();
        string str="";
        for(int i=0; i<n; i++)
        {         
           if(s[i]==' '){
               v.push_back(str);
               str.clear();
           }
            else{
                str+=s[i];
            }
            
        }
        v.push_back(str);
        unordered_map<char,int>mp1;
        for(auto y:pattern){
            mp1[y]++;
        }
        
            unordered_map<char,set<string>>mp;
            mp.clear();
            int j=0;
            unordered_map<string,int>m1;
            for(auto x:v)
                
            { 
                m1[x]++;
                mp[pattern[j]].insert(x);
                j++;
            }
            
            if(mp1.size()!=m1.size() || pattern.length()!=v.size())
                return false;
            
            for(auto k :mp)
            {
                if(k.second.size()>1)
                    return false;
            }
              
        return true;;
        
    }
};