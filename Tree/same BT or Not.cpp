class Solution {
public:
    bool ans=true;
    void preOrder(TreeNode* p, TreeNode* q){
        if(p==NULL || q==NULL){
//             ifp==q return 1 else return 0
            if(p!=q){
                ans=false;
                return;
            }
            return;
        }
        
        if(p->val != q->val){
            ans = false;
            return;
        }
        preOrder(p->left, q->left);
        preOrder(p->right, q->right);
    }
    
    bool isSameTree(TreeNode* p, TreeNode* q) {
        preOrder(p,  q);
        return ans;
    }
};