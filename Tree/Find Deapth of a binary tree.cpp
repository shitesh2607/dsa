int findDeapthOfTree(Node* root){
    if(root==NULL){
        return -1;
    }

    int leftHeight = findDeapthOfTree(root->left);
    int rightHeight = findDeapthOfTree(root->right);
    
    return max(leftHeight, rightHeight)+1;
    
}
// TC - O(num of nodes) as we are traversing all the nodes of the tree
// SC - O(max depth of the tree)

// Methos 2
int levelOrder(TreeNode* root){
    int ans=0;
    if(root==NULL){
        return ans;
    }
    queue<TreeNode*>q;
    q.push(root);
    
    while(!q.empty()){
        TreeNode* temp=q.front();
        int size = q.size();
        for(int i=0;i<size;i++){
            TreeNode* temp = q.front();
            q.pop();
            if(temp->left != NULL){
            q.push(temp->left);}

            if(temp->right != NULL){
            q.push(temp->right);}
            
        }
        ans++;
    }
        
    return ans;
}

// TC; o(no of depth)*
// SC: o(no of node for queue)