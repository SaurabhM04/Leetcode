class Solution {
public:
    string intToRoman(int nums) {
        vector<int>v = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        vector<string> s = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        string req_num="";
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<=nums)
            {
                req_num+=s[i];
                nums-=v[i];
                i--;
            }
        }
        return req_num;
    }
};