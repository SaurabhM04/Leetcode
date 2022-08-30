class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int row=m.size();
        int col=m[0].size();
        for(int i=0;i<row;i++) {
            for(int j=i;j<col;j++) {
                swap(m[i][j],m[j][i]);
            }
        }
        
        for(int i=0;i<row;i++) {
            reverse(m[i].begin(),m[i].end());
        }
        // for(auto i:m) {
        //     for(auto j:i) {
        //         cout<<j<<"  ";
        //     }
        //     cout<<endl;
        // }
    }
};