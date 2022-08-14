void PostOrderTravesal(Node* root){
    if(root==NULL){
        return;
    }
    PostOrderTravesal(root->left);
    PostOrderTravesal(root->right);
    cout<<root->data<<"->";
}

// TC o(N) N = no of node
// SC o(N)
