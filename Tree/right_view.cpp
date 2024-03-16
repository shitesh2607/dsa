class Solution {
public:
    void revesrPreorder(TreeNode* root, int level, vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        revesrPreorder(root->right, level+1,ans);
        // level--;
        revesrPreorder(root->left, level+1, ans);
        // level--;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        
        revesrPreorder(root, 0, ans);
        return ans;
    }
};
// TC = o(n)
// sc = o(H) height of tree