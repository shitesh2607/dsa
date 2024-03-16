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
class BSTIterator {
    stack<TreeNode*>st;
public:
    BSTIterator(TreeNode* root) {
        pushAllInStack(root);
    }
    
    int next() {
        TreeNode* tempNode = st.top();
        st.pop();
        pushAllInStack(tempNode->right);
        return tempNode->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
private:
    void pushAllInStack(TreeNode* node){
        for(;node!=NULL;st.push(node), node = node->left);
    }
};
// tc = o(1)
// sc = o(H)