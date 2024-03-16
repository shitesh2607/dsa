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

bool isLeaf(Node* root){
    if(root==NULL){
        return false;
    }
    if(root->left == NULL && root->right ==NULL){
        return true;
    }
    return false;
}

void leftBoundry(Node* root, vector<int>& arr){
    Node* cur = root->left;
    while(cur){
        if(!isLeaf(cur)){
            //if it isn't a part of the leaves; and a part of left boundary
            arr.push_back(cur->data);
        }
        if(cur->left){//if it's possible to go left, go left.
            cur = cur->left;
        }else{//else go right
            cur=cur->right;
        }
    }
}
void rightBoundry(Node* root, vector<int>& arr){
    Node* cur = root->right;
    vector<int> temp;
    while(cur){
        if(!isLeaf(cur)){
            //if it isn't a part of the leaves; and a part of left boundary
            temp.push_back(cur->data);
        }
        if(cur->right){
            cur = cur->right;
        }else{
            cur = cur->left;
        }
    }
    for(int i = temp.size()-1;i>=0;i--){
        arr.push_back(temp[i]);
    }
}

void addLeaf(Node* root, vector<int>& arr){
    if(root==NULL)return;
    
    if(isLeaf(root)){
        arr.push_back(root->data);
    }
    addLeaf(root->left, arr);
    addLeaf(root->right, arr);
}




vector<int> boundry(Node* root){
    vector<int> arr;
    leftBoundry(root, arr);
    addLeaf(root, arr);
    rightBoundry(root, arr);
    return arr;

}





int main()
{
    Node* root = NULL;
    root= insertData(root, 1);
    root= insertData(root, 57);
    root = insertData(root, 45);
    root = insertData(root, 56);
    root = insertData(root, 58);
    root = insertData(root, 6);
    root = insertData(root, 7);
    // bool ans = searchInBST(root, 46);
    // if(ans == true){
    //     cout<<"yes"<<endl;
    // }else{
    //     cout<<"Not found"<<endl;
    // }
    vector<vector<int>> ans = levelOrder(root);
    for(auto x: ans){
        for(auto s:x){
            cout<<s<<" ";
        }
        cout<<endl;
    }

    return 0;
}
