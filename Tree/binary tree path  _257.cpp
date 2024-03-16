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
    void dfs(TreeNode* root, string currentPath, vector<string>&temp){
        
        currentPath = currentPath+ "->" + to_string(root->val);
        if(root->left == NULL && root->right == NULL){
            
            temp.push_back(currentPath);
            return;
        }
        // currentPath = currentPath+ "->" + to_string(root->val);
        if(root->left != NULL){
            dfs(root->left, currentPath,  temp);
        }
        if(root->right != NULL){
            dfs(root->right, currentPath,  temp);
        }
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        
        vector<string>temp;
        if(root==NULL){
            return temp;
        }
        string currentPath = to_string(root->val);
        if(root->left == NULL && root->right ==NULL){
            temp.push_back(currentPath);
            return temp;
        }
        
        if(root->left != NULL){
            dfs(root->left, currentPath,  temp);
        }
        if(root->right != NULL){
            dfs(root->right, currentPath,  temp);
        }
        return temp;
    }
};