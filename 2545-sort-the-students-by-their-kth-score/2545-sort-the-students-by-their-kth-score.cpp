class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0; i<score.size(); i++){
            swap(score[i][0],score[i][k]);
        }
        sort(score.rbegin(),score.rend());
       // reverse(score.begin(),score.end());
        for(int i=0; i<score.size(); i++){
            swap(score[i][0],score[i][k]);
        }
        return score;
    }
};