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
    static bool cmp(pair<int, int> & v1, pair<int, int>& v2)
    {
    return v1.second < v2.second;
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
       map<int,vector<int>>mp;
        queue<pair<int,TreeNode*>>q;
        q.push({0,root});
        while(!q.empty())
        {    
            int n=q.size();
            vector<pair<int, int>> v;
            for(int i=0; i<n; i++)
            {
                auto cur=q.front();
                q.pop();
                int y=cur.first;
                int x=cur.second->val;
                
                v.push_back(make_pair(y,x));
                
                if(cur.second->left)
                q.push({y-1,cur.second->left});
                if(cur.second->right)
                q.push({y+1,cur.second->right});
                
            }
            sort(v.begin(),v.end(),cmp);
            for(auto p :v)
            mp[p.first].push_back(p.second);
        }
        vector<vector<int>>ans;
      
        for(auto i : mp) 
        { 
            vector<int>res;
            for(auto j : i.second)
            res.push_back(j);
            ans.push_back(res);
        }
        return ans;
    }
};