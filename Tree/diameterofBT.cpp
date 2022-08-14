class Solution {
private:
    int findDiameter(TreeNode* root, int& maximum){
        if(root==NULL){
            return 0;
        }
        int leftHeight = findDiameter(root->left, maximum);
        int rightHeight = findDiameter(root->right, maximum);
        maximum = max(maximum, leftHeight+rightHeight);
        return 1+max(leftHeight, rightHeight);
    }
public:
    
    int diameterOfBinaryTree(TreeNode* root) {
        int maximum = 0;
        findDiameter(root, maximum);
        return maximum;
    }
};
// TC = o(N)
//sc = o(N) for using stack 