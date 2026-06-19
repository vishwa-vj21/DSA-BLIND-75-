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
    TreeNode* deleteNode(TreeNode* root, int key) {
        
            if(!root) return NULL;
            if(key<root->val){
                root->left=deleteNode(root->left, key);
            }
            else if(key>root->val){
                root->right=deleteNode(root->right, key);
            }
            else{
                //case 1: no left child
                if(!root->left){
                    TreeNode *temp=root->right;
                    delete root;
                    return temp;
                }
                //case 2: no right child
                if(!root->right){
                    TreeNode *temp=root->left;
                    delete root;
                    return temp;
                }
                //case 3: 2 children
                TreeNode *predecessor=inorderPredecessor(root->left);
                root->val=predecessor->val;
                root->left=deleteNode(root->left, predecessor->val);
            }
        
        return root;
    }
    TreeNode *inorderPredecessor(TreeNode *root){
        while(root->right){
            root=root->right;
        }
        return root;
    }
};