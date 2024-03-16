vector<int> topView(Node *root)
    {
        //Your code here
        vector<int>ans;
        if(root==NULL){
            return ans;
        }
        map<int, int>m;
        queue<pair<Node*, int>> q;
        q.push({root, 0});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* node = temp.first;
            int line = temp.second;
            if(m.find(line) == m.end())m[line] = node->data;
            if(node->left){
                q.push({node->left, line-1});
            }
            if(node->right){
                q.push({node->right, line+1});
            }
        }
        for(auto a:m){
            ans.push_back(a.second);
        }
        return ans;
    }
    // TC = o(N)
    // Sc = o(N) + o(N) = o(N)