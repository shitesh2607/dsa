 void lex(int i, int n, vector<int>&ans){
        if(i>n || ans.size()==n){
            return;
        }
        ans.push_back(i);
        for(int j=0;j<10;j++){
            lex(10*i+j, n, ans);
        }
    }
    
    vector<int> lexicalOrder(int n) {
        vector<int> ans;
        for(int i=1;i<=n;i++){
            lex(i, n, ans);
        }
        return ans;
    }