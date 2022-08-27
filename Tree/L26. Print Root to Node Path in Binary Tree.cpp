bool root_to_node_path(Node* root, vector<int>&ans, int target){
    if(root==NULL){
        return false;
    }
    ans.push_back(root->data);
    if(root->data == target){
        return true;
    }
    
    if(root_to_node_path(root->left, ans, target)||root_to_node_path(root->right, ans, target)){
        return true;
    }
    ans.pop_back();
    return false;
}

// TC == o(N)
// SC = o(N)