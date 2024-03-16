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
// ethod 1, 
// TC = o(N)
// sc = o(N)
    void inorder(TreeNode* &root, vector<int>& arr){
        if(root==NULL){
            return;
        }
        inorder(root->left, arr);
        arr.push_back(root->val);
        inorder(root->right, arr);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>arr;
        inorder(root, arr);
        return arr[k-1];
    }
};


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
// Method 2
// tc = o(N)
// sc = o(1)
    void inorder(TreeNode* &root, int &count, int &ans, int k){
        if(root==NULL){
            return;
        }
        inorder(root->left, count, ans, k);
        if(root->val || root->val==0){
            count++;
        }
        if(count==k){
            ans = root->val;
            return;
        }
        inorder(root->right, count, ans, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        int count=0;
        inorder(root, count, ans, k);
        return ans;
    }
};