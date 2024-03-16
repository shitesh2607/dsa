#include <bits/stdc++.h>
using namespace std;
 // Definition for a binary tree node.
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        vector<int>ans;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                TreeNode* temp = q.front();
                while(!q.empty()){
                    q.pop();
                }
                if(temp->right !=NULL){
                    q.push(temp->right);
                }
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                ans.push_back(temp->val);
            }
        }
    }
};
//TC = o(N)
//sc = o(N) for queue

// method 2 preorder
void revesrPreorder(TreeNode* root, int level, vector<int> &ans){
        if(root==NULL){
            return;
        }
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        revesrPreorder(root->right, level+1,ans);
        revesrPreorder(root->left, level+1, ans);    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        
        revesrPreorder(root, 0, ans);
        return ans;
    }
// TC = o(N)
// SC = o(hieght of BT) 
// for skew tree SC will be o(N)