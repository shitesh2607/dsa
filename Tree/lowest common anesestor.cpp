/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//         bcase case
        if(root==NULL || root==p || root==q){
            return root;
        }
        
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);
        
        // result
        if(right==NULL){
            return left;
        }else if(left == NULL){
            return right;
        }else{
//             both left and right not null we go the value
            return root;
        }
    }
};
//TC = o(N)
// SC = o(N)