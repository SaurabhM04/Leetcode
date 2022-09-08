class Solution {
public:
    vector<vector<int>> generate(int n) {
    vector<vector<int>>v;
        for(int i=0; i<n; i++)
        {
            vector<int>v1;
            if(i==0){
                v1.push_back(1);
            }
            else {            
                    for(int j=0; j<=i; j++)
                    {
                    if(j==0 || i==j)
                        v1.push_back(1);
                    else
                        v1.push_back(v[i-1][j-1]+v[i-1][j]);
                    }
            }
            v.push_back(v1);
        }
        return v;
    }
};