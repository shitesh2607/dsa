int sumOfBT(Node* root){
    if(root == NULL){
        return 0;
    }
    
    int leftSum = sumOfBT(root->left);
    int rightSum = sumOfBT(root->right);
    
    return leftSum + rightSum + root->data;
}
