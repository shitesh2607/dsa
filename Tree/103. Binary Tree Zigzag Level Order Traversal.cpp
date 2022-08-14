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
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root, int& flag, vector<vector<int>>& ans){
    if(root==NULL){
        return ans;
    }
    queue<TreeNode*>q;
    q.push(root);
    
    while(!q.empty()){
        vector<int> levels;
        TreeNode* temp=q.front();
        cout<<temp->val<<endl;
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left != NULL){
            q.push(temp->left);}

            if(temp->right != NULL){
            q.push(temp->right);}
            
            levels.push_back(temp->val);
            
        }
        if(flag==1){
            reverse(levels.begin(), levels.end());
            ans.push_back(levels);
            flag=0;
        }else{
            ans.push_back(levels);
            flag=1;
        }
        
    }
        
    return ans;
}
    
    
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        int indicator = 0;
        vector<vector<int>> ans;
        levelOrder(root, indicator, ans);
        return ans;
    }
};