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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,vector<int>>vertical;//id vector 
        queue<pair<TreeNode*,int>>q;//node, id
        vector<vector<int>>ans;
        q.push({root,0});
        while(not q.empty()) {
            int st=q.size();
            vector<pair<int,int>> level;// node-value,id
            for(int i=0;i<st;i++) { 
                pair<TreeNode*,int> k=q.front();
                q.pop();
                level.emplace_back(make_pair(k.first->val,k.second));
                if(k.first->left) {
                    q.push({k.first->left,k.second-1});
                }
                if(k.first->right) {
                    q.push({k.first->right,k.second+1});
                }
            }
            sort(level.begin(),level.end());
            for(auto pr : level) {
                vertical[pr.second].push_back(pr.first);
            }
        }
        for(auto i:vertical) {
            ans.push_back(i.second);
        }
        return ans;
    }
};