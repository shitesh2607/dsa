

#include <bits/stdc++.h>
using namespace std;

// A linked list node
struct node{
    int data;
	node *next;
	node(int x) : data(x), next(NULL) {}
};



class LinkListFunctions{
    public:
    // insert
    void addAfter(node* &head, int val){
        node* n = new node(val);
        
        if(head==NULL){
            head = n;
            return;
        }
        
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }

    void addMiddle(int val){
        
    }
    
    // delete
    void deleteFirst(node* &head){
        
        if(head==NULL){
            cout<<"LIST id Already empty"<<endl;
            return;
        }else{
            node* temp = head;
            head = temp->next;
            delete temp;
            printAll(head);
        }
    }
    
    void deleteLast(node* &head){
        
        if(head==NULL){
            cout<<"LIST id Already empty"<<endl;
            return;
        }else if(head->next==NULL){
            delete head;
            head =NULL;
        }else{
            
        }
        node* temp = head;
        head = temp->next;
        delete temp;
        printAll(head);
        
    }
    
    void reverse(node* head){
        
    }
    
    // get all element
    void printAll(node* head){
        node* temp =head;
        if(temp==NULL){
            cout<<"LIST is NULL"<<endl;
            return;
        }
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    
    node* head=NULL;
    LinkListFunctions linklistfunctions;
    linklistfunctions.addAfter(head, 2);
    linklistfunctions.addAfter(head, 3);
    linklistfunctions.addAfter(head, 4);
    linklistfunctions.addAfter(head, 5);
    linklistfunctions.printAll(head);
    linklistfunctions.deleteFirst(head);
    
    
    return 0;
}
