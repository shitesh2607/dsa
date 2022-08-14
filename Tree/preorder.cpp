#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void preOrderTraversal(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"->";
    
    // preOrderTraversal(root->data);
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
    
}

// TC= o(N) N=no of node
// SC = o(N) 