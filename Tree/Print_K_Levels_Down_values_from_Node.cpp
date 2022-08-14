#include <bits/stdc++.h>
using namespace std;
void Print_K_Levels_Down_values_from_Node(Node* root, int K){
    if(root==NULL || K<0){
        return;
    }
    if(K==0){
        cout<<root->data<<endl;
    }
    Print_K_Levels_Down_values_from_Node(root->left, K-1);
    Print_K_Levels_Down_values_from_Node(root->right,K-1);
}