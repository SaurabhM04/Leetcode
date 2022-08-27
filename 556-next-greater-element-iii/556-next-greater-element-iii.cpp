class Solution {
public:
    int nextGreaterElement(int n) {
        string s=to_string(n);
        int i=s.size()-2,j=s.size();
        
        while(i>=0 and s[i]>=s[i+1])  {
            i--;                    
        }
        if(i==-1)
        return -1;
        while(j>i and s[j]<=s[i])  {
               j--;                  
            }
        swap(s[i],s[j]);
        sort(s.begin()+i+1,s.end());
        long long int num=stoll(s);
         if(num>INT_MAX)
        return -1;
        else
            return num;
        
    }
};