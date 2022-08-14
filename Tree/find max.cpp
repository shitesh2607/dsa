
int find_max(Node* root){
    if(root==NULL){
        return -1;
    }
    Node* currentNode = root;

    while(currentNode->right != NULL){
        currentNode = currentNode->right;
    }
    return currentNode->data;
}

