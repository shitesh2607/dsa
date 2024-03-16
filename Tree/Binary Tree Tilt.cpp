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
private:
     int tiltSum = 0;
    int tilt(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int leftSum = tilt(root->left); //will retrun left sum and change tilt val
        int rightSum = tilt(root->right); //will retrun right sum and change tilt val
        int tiltVal = abs(leftSum-rightSum);
        tiltSum = tiltSum+tiltVal;
        return leftSum+rightSum+root->val;
    }
public:
   
    int findTilt(TreeNode* root) {
        tilt(root);
        return tiltSum;
    }
};