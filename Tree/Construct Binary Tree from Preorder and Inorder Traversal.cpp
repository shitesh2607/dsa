class Solution {
public:
    TreeNode* BuildingTree(vector<int>& preorder,int preStart, int preEnd, vector<int>& inorder, int inStart, int inEnd){
        if(inStart>inEnd)return NULL;
        int idx = inStart;
        while(inorder[idx] != preorder[preStart])idx++;
        int count = idx-inStart;
        TreeNode* node = new TreeNode(inorder[idx]);
        node->left = BuildingTree(preorder, preStart+1, preStart+count, inorder, inStart, idx-1);
        node->right = BuildingTree(preorder, preStart+count+1, preEnd, inorder, idx+1, inEnd);
        
        return node;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int inorderSize = inorder.size();
        return BuildingTree(preorder,0,preorder.size()-1, inorder,0, inorder.size()-1);
    }
};