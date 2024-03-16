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
    TreeNode* prev = NULL;
    bool validating(TreeNode* root){
        if(root==NULL)return true;
        
        if(!validating(root->left))return false;
        if(prev!=NULL && prev->val >= root->val){
            return false;
        }
        prev = root;
        if(!validating(root->right))return false;
        return true;
    }
        
    bool isValidBST(TreeNode* root) {
        return validating(root);
    }
};