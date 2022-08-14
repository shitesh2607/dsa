
int find_min(Node* root){
    if(root==NULL){
        return -1;
    }
    Node* currentNode = root;

    while(currentNode->left != NULL){
        currentNode = currentNode->left;
    }
    return currentNode->data;
}

int find_min(Node* root){
    if(root==NULL){
        return -1;
    }
    if(root->left == NULL){
        return root->data;
    }
    return find_min(root->left);
}