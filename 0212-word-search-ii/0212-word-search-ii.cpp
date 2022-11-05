// **copy paste**
//brute force
// class Solution {
// public:
//     bool dfs(int m,int n,int i,int j,vector<vector<char>>&grid,string &word,int k,vector<vector<bool>>& is_visited)
//     {
//         if(k==word.size())
//             return true;
//         if(i<0||i>=m||j<0||j>=n||is_visited[i][j]||grid[i][j]!=word[k])
//             return false;
//         char x=grid[i][j];
//         is_visited[i][j]=true;
//         bool down=dfs(m,n,i+1,j,grid,word,k+1,is_visited);
//         bool right=dfs(m,n,i,j+1,grid,word,k+1,is_visited);
//         bool left=dfs(m,n,i-1,j,grid,word,k+1,is_visited);
//         bool up=dfs(m,n,i,j-1,grid,word,k+1,is_visited);
//         is_visited[i][j]=false;
//         return up||down||right||left;  
//     }
//     vector<string> findWords(vector<vector<char>>& grid, vector<string>& words) {
//      int m=grid.size(),n=grid[0].size();
//         vector<string>ans;
//         vector<vector<bool>>is_visited(m,vector<bool>(n,false));
//         vector<bool>vis(words.size(),false);
//         for(int i=0; i<m; i++)
//         {
//             for(int j=0; j<n; j++)
//             {
//                 for(int k=0; k<words.size();k++)
//                 if(vis[k]==false && dfs(m,n,i,j,grid,words[k],0,is_visited))
//                 {
//                     ans.push_back(words[k]);
//                     vis[k]=true;
//                 }
//             }
//         }
//         return ans;
//     }
// };

class Solution {
public:
    //we use a trie for storing the words
    struct TrieNode{
        int endsHere;
        TrieNode* child[26];
    };
     
    //create a trieNode and returns it
    TrieNode* getNode()
    {
        TrieNode* newNode=new TrieNode;
        newNode->endsHere=0;
        for(int i=0;i<26;++i)
        {
            newNode->child[i]=NULL;
        }
        return newNode;
    }
    
    TrieNode* root=getNode();
    
    vector<vector<int>> offset={{0,1},{1,0},{-1,0},{0,-1}}; //useful to move in 4 directions
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        
        //insert all the words into the trie
        for(auto word:words)
        {
            addWord(word);
        }
        
        
        vector<string> res;
        //now search the words in the grid
        int rows=board.size();
        int cols=board[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(root->child[board[i][j]-'a']!=NULL){ //if a starting letter of a wod exists in the words dict
                    checkWord(root->child[board[i][j]-'a'],board,i,j,res,"");
                }
            }
        }
        return res;
    }
    
    
    //inserts words into the trie
    void addWord(string word)
    {
        TrieNode* curr=root;
        for(int i=0;i<word.length();++i)
        {
            int ind=word[i]-'a';
            if(curr->child[ind]==NULL) //create if doesnot exists
                curr->child[ind]=getNode();
            curr=curr->child[ind];
        }
        curr->endsHere=1; //the word ends here
    }
    
    //check if the char exists in the board
    void checkWord(TrieNode* curr,vector<vector<char>>& board,int i,int j,vector<string>& res,string s)
    {
        
        s.push_back(board[i][j]);
        if(curr->endsHere>0)
        {
            //we have got a word
            res.push_back(s);
            curr->endsHere-=1; //since  not to push again the same word from other possibility
        }
        char orig=board[i][j];
        board[i][j]='#';
        for(int k=0;k<4;k++)
        {
            int x=offset[k][0]+i;
            int y=offset[k][1]+j;
            
            //dont move in these directions
            if(x<0 || y<0 || x>=board.size() || y>=board[0].size() || board[x][y]=='#' || curr->child[board[x][y]-'a']==NULL)
                continue;
            checkWord(curr->child[board[x][y]-'a'],board,x,y,res,s);
        }
        board[i][j]=orig;
        
        
    }
};
