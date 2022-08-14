void InOrderTravesal(Node* root){
    if(root==NULL){
        return;
    }
    InOrderTravesal(root->left);
    cout<<root->data<<"->";
    InOrderTravesal(root->right);
}

// TC o(N) N = no of node
// SC o(N)
