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
    unordered_map<int, int> traversal;
    int pre=0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty() || inorder.empty()) return nullptr;
        int i=0;
        for(int n: inorder){
            traversal[n]=i;
            i++;
        }
        return build(preorder, 0, preorder.size()-1);

    }

    TreeNode* build(vector<int>&preorder, int left, int right){
        if(left>right) return nullptr;
        TreeNode *root=new TreeNode(preorder[pre++]);

        int mid=traversal[root->val];

        root->left=build(preorder, left, mid-1);
        root->right=build(preorder, mid+1, right);

        return root;
        
    }
};