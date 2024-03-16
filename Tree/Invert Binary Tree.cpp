 #include <bits/stdc++.h>
using namespace std;

 struct TreeNode {
      int val;
    TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

// method 1
TreeNode* invertTree(TreeNode* root) {
        // if(root==NULL){
        //     return root;
        // }
        // invertGivenTree(root->left, root->right);
        // return root;
        if(!root) return root;
        swap(root->left, root->right);
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }

// Method 2
// TLE
TreeNode* invertTree(TreeNode*& root){
    stack<TreeNode*>st;
    st.push(root);
    while(!st.empty()){
        TreeNode* temp = st.top();
        st.pop();

        if(temp!=NULL){
            st.push(root->left);
            st.push(root->right);
            swap(root->left, root->right);
        }
    }
    return root;
}
