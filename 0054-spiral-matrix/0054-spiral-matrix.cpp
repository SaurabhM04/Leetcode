class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        //vector<int>v;
        int n=mat.size();
        int m=mat[0].size();
        
        int left=0,right=m-1,bottom=n-1,top=0;
        int direction=1;
        vector<int> v;
        
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++) 
                    v.push_back(mat[top][i]);
                direction=2;
                top++;
            }
            
            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++) 
                    v.push_back(mat[i][right]);
                
                direction=3;
                right--;
            }
            
            else if(direction==3)
            {
                for(int i=right;i>=left;i--) 
                    v.push_back(mat[bottom][i]);
                
                direction=4;
                bottom--;
            }
            
            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) 
                    v.push_back(mat[i][left]);
                
                direction=1;
                left++;
            }
        }
        return v;
        
    }
};