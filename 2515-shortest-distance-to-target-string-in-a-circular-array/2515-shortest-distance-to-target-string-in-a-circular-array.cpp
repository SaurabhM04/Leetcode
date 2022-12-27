class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        //unordered_map<string,int>mp;
        int n=words.size();
        vector<int>v;
        for(int i=0; i<n; i++){
            if(words[i]==target)
                v.push_back(i);
        } 
        int sum=0;
        for(auto x: words){
            if(x!=target)
                sum++;
        }
        if(sum==n)
            return -1;
        int ans=INT_MAX;
        for(int i=0; i<v.size(); i++){
        int a=abs(startIndex-(v[i]));
        int b=(n-a);
        ans=min(ans,min(a,b));
        }
        return ans;        
        
    }
};
