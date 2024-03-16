#include <bits/stdc++.h>
using namespace std;


void reOrder(Node* root){
    if(root==NULL){
        return;
    }
    int child =0;
    
    if(root->left){
        child = child+root->left->data;
    }
    if(root->right){
        child+=root->right->data;
    }
    
    if(child >= root->data){
        root->data = child;
    }
    else{
        if(root->left){
            root->left->data = root->data;
        }
        if(root->right){
            root->right->data = root->data;
        }
    }
    
    reOrder(root->left);
    reOrder(root->right);
    
    int total = 0;
    if(root->left){
        total+=root->left->data;
    }
    if(root->right){
        total+=root->right->data;
    }
    if(root->right or root->left){
        root->data = total;
    }
    
}