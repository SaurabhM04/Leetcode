class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       int n=tokens.size();  
        int j=n-1;
        int i=0,sum=0;
        sort(tokens.begin(),tokens.end());  
        while(i<j)
        {       
            if(tokens[i]<=power ){
               
                power-=tokens[i];
                 sum++;
                i++;
            }
            
            else if(tokens[j]+power>=tokens[i] && sum>=1){
                
                power+=tokens[j]; 
                sum--;
                j--;
               
            }       
            else 
                break;
        }
        while(i < j+1 && power >= tokens[i]) 
        {
            power -= tokens[i];
            sum++;
            i++;
        }
        return sum;
    }
};