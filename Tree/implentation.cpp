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

vector<vector<int>> levelOrder(Node* root){
    vector<vector<int>> ans;
    if(root==NULL){
        return ans;
    }
    queue<Node*>q;
    q.push(root);
    
    while(!q.empty()){
        vector<int> levels;
        Node* temp=q.front();
        cout<<temp->data<<endl;
        int size = q.size();
        for(int i=0;i<size;i++){
            Node* temp = q.front();
            q.pop();
            if(temp->left != NULL){
            q.push(temp->left);}

            if(temp->right != NULL){
            q.push(temp->right);}
            
            levels.push_back(temp->data);
        }
        ans.push_back(levels);
    }
        
    return ans;
}

int maxPathSum(Node* root){
    
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
