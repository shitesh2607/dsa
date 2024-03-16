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
    bool isCousion(TreeNode* root, int x, int y){
    if(root==NULL){
        return false;
    }
    queue<TreeNode*>q;
    q.push(root);
    
    while(!q.empty()){
        int size  = q.size();
        bool isXExist = false;
        bool isYExist = false;
        for(int i=0;i<size;i++){
            TreeNode* front = q.front();
            q.pop();
            if(front->val == x)isXExist = true;
            if(front->val==y)isYExist=true;
            
            if(front->left!=NULL && front->right!=NULL){
                if(front->left->val==x && front->right->val==y)return false;
                if(front->left->val==y && front->right->val==x)return false;
            }
            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
        if(isYExist && isXExist){
            cout<<true;
            return true;
        }
    }
    return false;
}
    bool isCousins(TreeNode* root, int x, int y) {
       return isCousion(root, x, y);
    }
};