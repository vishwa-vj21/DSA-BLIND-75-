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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        if(!root) return ans;
        stack<TreeNode *> first;
        stack<TreeNode *> second;
        
        first.push(root);
        while(!first.empty()){
            TreeNode *node=first.top();
            first.pop();
            second.push(node);
            if(node->left) first.push(node->left);
            if(node->right) first.push(node->right);
        }
        while(!second.empty()){
            
            ans.push_back(second.top()->val);
            second.pop();
        }
        return ans;
    }
};