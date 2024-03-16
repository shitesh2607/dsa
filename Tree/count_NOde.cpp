// 🍇 Formula is (2^TreeLevel - 1). Only works for perfect tree.
// 🍇 To determine if its a perfect tree, go all the way down and count the nodes on left and right side, If they match, its a perfect tree and our formula applies.
// 🍇 If its not a perfect tree, we go on left and right subtree and again determine if they are perfect tree.
// 🍇 When we have our left and right heights, we do (1 + left + right)
// 🍇 If we reach null, return 0
// 🍇 C++ note: 1 << n is the same as raising 2 to the power n, or 2^n

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
    int findRightHieght(TreeNode* root){
    int height =0;
    while(root){
        height++;
        root=root->right;
    }
    return height;
}

int findLeftHeight(TreeNode* root){
    int height =0;
    while(root){
        height++;
        root = root->left;
    }
    return height;
}

int countNodes(TreeNode* root){
    if(root==NULL){
        return 0;
    }
    int lh = findLeftHeight(root);
    int rh = findRightHieght(root);
    
    if(lh==rh)return (1<<lh)-1;
    return 1+countNodes(root->left)+countNodes(root->right);
    
}

};