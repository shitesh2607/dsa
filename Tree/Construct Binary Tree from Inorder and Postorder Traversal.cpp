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
    TreeNode* sol(vector<int>& inorder, int inStart, int inEnd, vector<int>& postorder, int postStart, int postEnd){
        if(inStart>inEnd){
            return NULL;
        }
        int idx = inStart;
        while(postorder[postStart] != inorder[idx])idx++;
        TreeNode* node = new TreeNode(inorder[idx]);
        int count = inEnd-idx;
        node->left  = sol(inorder, inStart, idx-1, postorder, postStart-count-1, postEnd);
        node->right = sol(inorder, idx+1, inEnd, postorder, postStart-1, postStart-count);
        return node;
    }
    
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return sol(inorder, 0,inorder.size()-1, postorder,postorder.size()-1, 0);
    }
};