class Solution {
public:
    int maximumValue(vector<string>& strs) {
        int n=strs.size();
        int maxi=0,ans=0;
        for(int j=0; j<n; j++){
            int len=0;
            int flag1=0,flag2=0;
            for(int i=0; i<strs[j].size(); i++){   
                 if(strs[j][i]>='a'&&strs[j][i]<='z'){
                     len++;
                     flag1=1;
                 }
                 else{
                     flag2=1;
                     len++;
                 }
                 
            }
            if((flag1&&flag2)||flag1)
                maxi=max(maxi,len);
            else{
                int k=stoi(strs[j]);
                ans=max(ans,max(maxi,k));  
                //cout<<stoi(strs[j])<<endl;
            }          
        }
        if(ans>maxi)
            return ans;
        else
            return maxi;
    }
};