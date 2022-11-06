class Solution {
public:
    string orderlyQueue(string s, int k) {
    //observation based
       int n=s.size();
        if(k==1){
            string s2=s+s;
            string ans=s;
            for(int i=1; i<n; i++){
                string str = s2.substr(i,n);
                if(str<ans){
                    ans=str;
                }
            }
            return ans;
        } 
        sort(s.begin(),s.end());
        return s;
    }
};