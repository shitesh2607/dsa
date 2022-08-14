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

Node* getNewNode(int data){
    Node* newNode = new Node(data);
    newNode->data = data;
    newNode->right = NULL;
    newNode->left = NULL;
    return newNode;
}

bool searchInBST(Node* rootNode, int data){
    if(rootNode==NULL)return false;
    if(rootNode->data == data) return true;
    if(data <= rootNode->data){
        return searchInBST(rootNode->left, data);
    }else{
        return searchInBST(rootNode->right, data);
    }

}
 
Node* insertData(Node* &rootNode, int data){
    if(rootNode == NULL){
        rootNode = getNewNode(data);
    }else if(data <= rootNode->data){
        rootNode->left =  insertData(rootNode->left, data);
    }else{
        rootNode->right = insertData(rootNode->right, data);
    }
    return rootNode;
}

vector<int> preOrder(Node* root){
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
        if(root->right!=NULL){
            tempStack.push(root->right);
        }
        if(root->left==NULL){
            tempStack.push(root->left);
        }
    }
    
}



int main()
{
    Node* root = NULL;
    root= insertData(root, 45);
    root= insertData(root, 44);
    root = insertData(root, 46);
    root = insertData(root, 47);
    root = insertData(root, 75);
    bool ans = searchInBST(root, 46);
    if(ans == true){
        cout<<"yes"<<endl;
    }else{
        cout<<"Not found"<<endl;
    }

    return 0;
}
