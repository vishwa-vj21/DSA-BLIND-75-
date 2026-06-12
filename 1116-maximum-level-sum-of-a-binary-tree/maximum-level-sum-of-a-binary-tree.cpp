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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*> q;
        int level=1;
        int maxsum=INT_MIN;
        int max_lvl=INT_MAX;
        if(root==nullptr) return 0;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            int count=0;
            for(int i=0; i<size; i++){
                TreeNode *node=q.front();
                q.pop();
                count+=node->val;
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            if(count>maxsum){
                maxsum=count;
                max_lvl=level;
            }
            level++;
        }
        return max_lvl;
    }
};