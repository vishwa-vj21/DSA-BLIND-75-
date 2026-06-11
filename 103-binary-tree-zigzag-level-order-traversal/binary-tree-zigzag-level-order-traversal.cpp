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
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        bool dir=false;
        if(root==nullptr) return ans;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> res;
            for(int i=0; i<size; i++){
                TreeNode *node=q.front();
                res.push_back(node->val);
                q.pop();
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(dir==true){
                reverse(res.begin(), res.end());
                dir=false;
            }
            else{
                dir=true;
            }
            ans.push_back(res);
            
        }
    return ans;
    }
};