class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int flag=0;
        long long int volume=(long long)height*(long long)length*(long long)width;
        if(length>=10000||width>=10000||height>=10000 || volume>=1000000000)
            flag=1;
        if(mass>=100 && flag==1)
            return "Both";
        else if(mass>=100 && flag==0)
            return "Heavy";
        else if(flag==1 && mass<100)
            return "Bulky";
        else
            return "Neither";
    }
};