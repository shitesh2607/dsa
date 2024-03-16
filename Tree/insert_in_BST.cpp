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
   TreeNode* insertNode(TreeNode* root, int val){
        if(root==NULL){
            return new TreeNode(val);
        }
       TreeNode* newNode = root;
       while(true){
           if(newNode->val <= val){
               if(newNode->right ==NULL){
                   newNode->right = new TreeNode(val);
                   break;
               }else{
                   newNode = newNode->right; 
               }
               
           }else{
               if(newNode->left ==NULL){
                   newNode->left = new TreeNode(val);
                   break;
               }else{
                   newNode = newNode->left; 
               }
           }
       }
       return root;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
            return insertNode(root, val);
    }
};

// TC = o(logn base 2)
// Sp = o(1)