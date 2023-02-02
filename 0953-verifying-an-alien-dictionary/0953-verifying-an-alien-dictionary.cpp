class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>m;
        
        for(int i=0;i<order.size();i++){
            m[order[i]]=i+1;
        }
        
        for(int i=1;i<words.size();i++){
            int n1=words[i-1].length();
            int n2=words[i].length();

            for(int j=0;j<max(n1,n2);j++){
                if(m[words[i-1][j]]>m[words[i][j]]){
                    return false;
                }
                else if(m[words[i-1][j]]<m[words[i][j]]){
                    break;
                }
                else{
                    continue;
                }
               
            }
        }
        return true; 
    }
};