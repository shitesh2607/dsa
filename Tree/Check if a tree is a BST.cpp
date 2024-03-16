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
    bool validating(TreeNode* root, long min, long max ){
        if(root == NULL){
            return true;
        }
        if(root->val <= min || root->val >=max)return false;
        bool left = validating(root->left, min, root->val);
        bool right = validating(root->right, root->val, max);
        
        if(left && right){
            return true;
        }
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return validating(root, LONG_MIN, LONG_MAX);
    }
};
// TC = o(N)
// SC = o(1)

vector<int> vec;
    void inorder(Node *root){
            if(root == NULL){
                return;
            }
            inorder(root->left);
            vec.push_back(root->data);
            inorder(root->right);
        }
	bool checkBST(Node* root) {
        
        inorder(root);
        for(int i = 1 ; i<vec.size() ; i++){
            if(vec[i-1]>=vec[i]) return false;
        }
        return true;
		
	}