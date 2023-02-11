class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1,bottom=n-1,top=0;
        int direction=1;
        vector<vector<int>>matrix(n,vector<int>(n,0));
        int val=1;
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++) 
                    matrix[top][i]=val++;
                direction=2;
                top++;
            }
            
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) 
                    matrix[i][right]=val++;
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) 
                    matrix[bottom][i]=val++;
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) 
                    matrix[i][left]=val++;
                direction=1;
                left++;
            }
        }
        return matrix;
        
    }
};