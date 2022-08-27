#include <bits/stdc++.h>
using namespace std;
//  Definition for a binary tree node.
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
    vector<vector<int>> verticalTraversalIn_levelOrer(TreeNode* root){
    map<int, map<int, multiset<int>>> ans;
    queue<pair<TreeNode*, pair<int, int>>>q;
    q.push({root,{0,0}});
    
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        TreeNode* node = p.first;
        int x = p.second.first;
        int y = p.second.second;
        ans[x][y].insert(node->val); 
        if(node->left){
            q.push({node->left,{x-1, y+1}});
        }
        if(node->right){
            q.push({node->right,{x+1, y+1}});
        }
    }
    
    vector<vector<int>>arr;
    
    for(auto p : ans){
        vector<int>v;
        for(auto r : p.second){
            v.insert(v.end(), r.second.begin(), r.second.end());
        }
        arr.push_back(v);
    }
    return arr;
    
    
}
// preorder


};

// TC = o(n) for traversal * o(log) for using map & performing some operation
// SC = o(n) for verticle and all things(map) + o(n) using queue