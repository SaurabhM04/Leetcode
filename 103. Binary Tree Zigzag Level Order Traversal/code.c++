/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
 
   vector<vector<int>> res;
   if(root==NULL)
    return res;

   bool flag=true;
   
    queue<TreeNode* > qu;
    
    qu.push(root);
    
    while(!qu.empty()){
        vector<int> rs;
        
        int k=qu.size();
      
        for(int i=0;i<k;i++){
            TreeNode* temp=qu.front();
            qu.pop();
            rs.push_back(temp->val);
            if(temp->left){
                qu.push(temp->left);
            }
              if(temp->right){
                qu.push(temp->right);
            }
            
            
        }
        
       if(flag){
        res.push_back(rs); 
           flag=false;
       } 
        else{
            reverse(rs.begin(),rs.end());
             res.push_back(rs); 
             flag=true;
        }
    } 

    return res;  
    }
};