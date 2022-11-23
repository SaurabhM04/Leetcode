class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int m=board.size();  
        int ms[9][9] = {0};
        for(int i=0; i<9; i++)
        {
           int n=board[i].size();
            unordered_map<int,int>mp,v;
           // unordered_map<int,int>v;
            int sum=0,sum2=0;
            for(int j=0; j<9; j++)
            {
            
                if(board[i][j]!='.'){
                    sum++;
                    mp[board[i][j]]++;
                    
                }
            }
            
            for(int j=0; j<9; j++)
            {
            
                if(board[j][i]!='.'){
                     sum2++;
                     v[board[j][i]]++;
                  
                }
            }
            if(mp.size()!=sum || v.size()!=sum2)
            {
                return false;
            }
            for(int j = 0; j < board[i].size();  j++)
                if(board[i][j] != '.')
                {
                    int  z = board[i][j] - '0' - 1, k = i / 3 * 3 + j / 3;
                    if(ms[k][z]!=0)
                        return false;
                    ms[k][z] = 1; 
                }
        }
        return true;
    }
};



