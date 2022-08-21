class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience) {
        
        int n=energy.size();
        int sum=1;
        for(int i=0; i<n; i++)
        {
            sum+=energy[i];
        }
        
        int ans=0;
        if(sum>initialEnergy)
        ans=sum-initialEnergy;
        
        for(int i=0; i<n; i++)
        {
            if(initialExperience<=experience[i]){
                ans+=(experience[i]-initialExperience+1);
                initialExperience+=experience[i]+experience[i]-initialExperience+1;
            }
            else{
                initialExperience+=experience[i];
            }
        }
        return ans;
        
    }
};