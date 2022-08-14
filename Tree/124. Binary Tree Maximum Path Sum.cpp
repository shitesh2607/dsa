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
    int Sum(TreeNode* root, int& Maxsum){
        if(root==NULL){
            return 0;
        }
        int leftSum = max(0,Sum(root->left, Maxsum));
        int rightSum = max(0,Sum(root->right, Maxsum));
        Maxsum = max(Maxsum, leftSum+rightSum+root->val);
        return root->val+max(leftSum, rightSum);
    }
    
    int maxPathSum(TreeNode* root) {
        int sum=INT_MIN;
        Sum(root, sum);
        return sum;
    }
};

// TC == o(N)
// SC == o(N) for recursion stack

