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
    bool isLeaf(TreeNode* root){
        if(root==NULL){
            return false;
        }
        if(root->left ==NULL && root->right ==NULL){
            return true;
        }
        return false;
    }
    void inorderTraversal(TreeNode* root, int& sum){
        if(root==NULL){
            return ;
        }
        inorderTraversal(root->left, sum);
        if(isLeaf(root->left)){
            sum = sum+root->left->val;
        }
        inorderTraversal(root->right, sum);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int sum =0;
        inorderTraversal(root, sum);
        return sum;
    }
};