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
        vector<vector<int>> ans;
        if(!root) return ans;
        map<int, map<int, multiset<int>>> nodes;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root,{ 0, 0}});
        while(!q.empty()){
            auto info=q.front();
            q.pop();
            TreeNode *curr=info.first;
            int row=info.second.first;
            int col=info.second.second;
            nodes[col][row].insert(curr->val);
            if(curr->left) q.push({curr->left, {row+1, col-1}});
            if(curr->right) q.push({curr->right, {row+1, col+1}});
        }
        for(auto &col: nodes){
            vector<int> temp;
            for(auto &row: col.second){
                temp.insert(temp.end(), row.second.begin(), row.second.end());
            }
            ans.push_back(temp);
        }
        return ans;
    }
};