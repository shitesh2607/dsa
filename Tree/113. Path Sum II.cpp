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
    vector<vector<int>> ans;
    
    void pathsum2(TreeNode* root, vector<int>sumSubset, int targetSum){
        if(root==NULL){
            
            return;
        }
        
        sumSubset.push_back(root->val);
        targetSum = targetSum - root->val;
        if(root->left==NULL && root->right==NULL){
            if(targetSum==0){
                ans.push_back(sumSubset);
                return;
            }
            return;
        }
        
        pathsum2(root->left, sumSubset, targetSum);
        pathsum2(root->right, sumSubset, targetSum);
        sumSubset.pop_back();
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>sumSubset;
        pathsum2(root, sumSubset, targetSum);
        return ans;
    }
};