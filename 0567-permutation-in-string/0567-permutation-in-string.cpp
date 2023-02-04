class Solution {
public:
    bool checkInclusion(string s1, string s2) {
       
        if(s2.size() < s1.size())
            return false;
        
        int x = s1.size() , y = s2.size();
        vector<int> freq(26,0);              
        vector<int> window(26,0);           
        
        for(int i=0;i<x;i++)
        {
            freq[s1[i]-'a']++;               
            window[s2[i]-'a']++;
        }
        
        if(freq == window)
            return true;     
        
        int i=0 , j = x;
        
        while(j < y)
        {
            window[s2[i]-'a']--;            
            window[s2[j]-'a']++;
            
            if(window == freq)
                return true;
            
            j++; 
            i++;
        }
        
        return false;
    }
};