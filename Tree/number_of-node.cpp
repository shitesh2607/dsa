int numberOfNode(Node* root){
    if(root==NULL){
        return 0;
    }
    
    int leftSize = numberOfNode(root->left);
    int rightSize = numberOfNode(root->right);
    
    return leftSize+rightSize+1;
}
