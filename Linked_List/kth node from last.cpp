int kthNode_From_end(Node* &head, int node){
    Node* s = head;
    Node* f = head;
    for(int i = 0; i<node;i++){
        f = f->next;
    }
    while(f != NULL){
        s = s->next;
        f = f->next;
    }
    cout<<s->data<<endl;
    return s->data;
}
// used two pointer approach slow and fast
// fast =  required node
// o(n)