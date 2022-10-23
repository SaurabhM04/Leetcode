class Solution {
public:
    bool haveConflict(vector<string>& s1, vector<string>& s2) {
        s1[0].erase(2,1);
        s1[1].erase(2,1);
        s2[0].erase(2,1);
        s2[1].erase(2,1);
        int a=stoi(s1[0]);
        int b=stoi(s1[1]);
        int c=stoi(s2[0]);
        int d=stoi(s2[1]);
        if(b>=c && a<=d)
            return true;
        else
            return false;
        
    }
};