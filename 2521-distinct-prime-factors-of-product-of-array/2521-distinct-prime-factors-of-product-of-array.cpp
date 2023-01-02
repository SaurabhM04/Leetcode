class Solution {
public:
    int distinctPrimeFactors(vector<int>& nums) {
        set<int>s;
        for(int i=0; i<nums.size(); i++)
        {
            int j=2;
            int k;  
            int m_num=nums[i];
            while(m_num>1){
                int b=m_num;
                if(m_num%j==0){
                    s.insert(j);
                    m_num/=j;
                    k=j;
                }
                else{
                    if(k==b)
                      break;
                    j++;
                }
            }
        }
        
        return s.size();
    }
};