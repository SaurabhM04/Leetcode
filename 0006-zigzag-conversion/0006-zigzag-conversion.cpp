class Solution {
public:
    string convert(string s, int nrow) {
        if(nrow==1) return s;
        int idx=-1,dir=1;
        vector<string>v(nrow,"");
        string ans;
        for(int i=0;i<s.size();i++)
        {
            if(dir==1) idx++;
            else idx--;
            
            v[idx]+=s[i];
            if(idx==nrow-1) dir=-1;
            if(idx==0) dir=1;
            cout<<v[idx]<<" ";
        }
       return accumulate(v.begin(), v.end(),string{});
    }
};
