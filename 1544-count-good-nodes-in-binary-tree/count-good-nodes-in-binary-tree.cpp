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
    
    int goodNodes(TreeNode* root) {
        if(!root) return 0;
        return helper(root, root->val);

    }

    int helper(TreeNode* root, int maxlen){
        if(!root) return 0;
        int count=0;
        if(root->val>=maxlen) count++;
        maxlen=max(maxlen, root->val);
        count+=helper(root->left, maxlen);
        count+=helper(root->right, maxlen);
        
        return count;
    }
};