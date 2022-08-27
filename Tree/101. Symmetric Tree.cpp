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
    bool isSymetricTraversal(TreeNode* left, TreeNode* right){
        if(left==NULL || right==NULL){
            return left==right;
        }
        
        if( left->val != right->val){
            return false;
        }
        return isSymetricTraversal(left->left, right->right) && isSymetricTraversal(left->right, right->left);
    }
    
    bool isSymmetric(TreeNode* root) {
        return isSymetricTraversal(root->left, root->right);
    }
};
//TC = o(N)
//sc = o(N)