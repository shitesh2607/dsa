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