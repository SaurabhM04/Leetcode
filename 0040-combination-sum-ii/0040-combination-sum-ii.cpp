class Solution {
public:
    vector<vector<int>>ans;
    vector<int>v;
    void sum(vector<int>& candidates, int target,int csum,int ind)
    {
       
        if(csum==target)
        {
            ans.push_back(v);
            return ;
        }
        
        if(csum>target)
            return;
         //ind++;  
            for(int i=ind; i<candidates.size(); i++)
            {
                
                if(i != ind && candidates[i]==candidates[i-1])             
                continue;
                csum+=candidates[i];
                v.push_back(candidates[i]);
                //x=i;
                sum(candidates,target,csum,i+1);
                csum-=candidates[i];
                v.pop_back();
                   
            }
              
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        int ind=0;
        int csum=0;       
        sort(candidates.begin(),candidates.end());
        sum(candidates,target,csum,ind);
        return ans;
        
    }
};