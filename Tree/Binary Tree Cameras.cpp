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
    int cameraCount = 0;
    int cameraInstalation(TreeNode* root){
        if(root==NULL)return 1;
        
        int leftChildInfo = cameraInstalation(root->left);
        int rightChildInfo = cameraInstalation(root->right);
        if(leftChildInfo == -1 || rightChildInfo==-1){
            cameraCount++;
            return 0;
        }
        if(leftChildInfo ==0|| rightChildInfo==0){
            return 1;
        }
            return -1;
    }
    int minCameraCover(TreeNode* root) {
        if(cameraInstalation(root)==-1)cameraCount++;
        return cameraCount;
    }
};