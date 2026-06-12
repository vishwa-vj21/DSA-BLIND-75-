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
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root==nullptr) return false;
        int rem_sum=targetSum-root->val;
        cout<<rem_sum<<"\n";
        if(root->left==nullptr && root->right==nullptr){
            if(rem_sum==0){
                return true;
            }
            else{
                rem_sum+=root->val;
            }
        }
        
        return hasPathSum(root->left, rem_sum) || hasPathSum(root->right, rem_sum);
        
        return false;
    }
};