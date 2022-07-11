#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node* &head, int data){
    // creating new node
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void inserAtTail(Node* &tail, int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtMiddle(Node* head, int position, int data){
    if(position==1){
        insertAtHead(head, data);
    }
    Node* temp = head;
    int count = 1;
    while(count < position-1){
        temp = temp->next;
        count++;
    }
    Node* nodeToInsert = new Node(data);
    nodeToInsert->next= temp->next;
    temp->next= nodeToInsert;
}

void traversing(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->"<<temp->next<<endl;
        temp = temp->next;
    }

}
// get values of linkedList 
// int getFirst(Node* head){
//     if(){
        
//     }
// }

// int getLast(Node* head){

// }

// int getAtAnyIndex(){

// }
void addLast(Node* head){
    
}

int main(){
    // creating new node
    Node* node1 = new Node(10);
    // cout<<node1->data<<endl;
    // cout<<node1->next<<endl;
    Node* head = node1;
    Node* tail = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 12);
    
    insertAtHead(head, 13);
    inserAtTail(tail, 35);
    inserAtTail(tail, 36);
    inserAtTail(tail, 37);

    traversing(head);
    return 0;
}