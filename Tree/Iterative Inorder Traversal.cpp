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

vector<int> inOrder(Node* root){
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    std::stack<Node*>tempStack;
    tempStack.push(root);
    
    while(!tempStack.empty()){
        cout<<root->data<<endl;
        root=tempStack.top();
        tempStack.pop();
        ans.push_back(root->data);
        if(root->left!=NULL){
            tempStack.push(root->left);
        }
        if(root->right!=NULL){
            tempStack.push(root->right);
        }
        
    }
    
}