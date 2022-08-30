class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        vector<vector<int>>ms=m;
        int n=m.size();
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         m[i][j]=m[j][i];
        //     }
        // }
       for(int i=0; i<n; i++){
            for(int j=n-1; j>=0; j--){
                m[j][i]=ms[i][j];
            }
        }
        for(int i=0; i<n; i++){
            reverse(m[i].begin(), m[i].end());
        }
    }
};