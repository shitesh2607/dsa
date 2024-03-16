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
     TreeNode* lca(TreeNode* root,  TreeNode* p, TreeNode* q){
         if(root==NULL){
             return NULL;
         }
         int curNodeVal = root->val;
         if(curNodeVal > p->val && curNodeVal > q->val){
             return lca(root->left, p, q);
         }
         if(curNodeVal < p->val && curNodeVal < q->val){
             return lca(root->right, p, q);
         }
         return root;
         
     }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
         return lca(root, p, q);
    }
};
// TC = o(h)
// sc = o(1) or o(N) if you consider recursion stack