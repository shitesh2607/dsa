#include<bits/stdc++.h>
using namespace std;
#define n 10

class Queue{
    
    int* arr;
    int front;
    int back;
    
    public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    
    void push(int val){
        if(back == n-1){
           cout<<"Queue overflow.";
           return;
        }
        back++;
        arr[back] = val;
        if(front == -1){
            front++;
        }
    }
    
    
    void pop(){
        if(front == -1 || front > back){
            cout<<"Queue underflow.";
            return;
        }
        front++;
    }
    int peek(){
        if(front == -1 || front > back){
            cout<<"Queue underflow.";
            return 0;
        }
        return arr[front];
    }
    
    bool empty(){
        if(front == -1 || front > back){
            return true;
        }
        return false;
    }
};

int main(){   
    
    Queue q;
    int peek;
    q.push(1);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.pop();
    peek = q.peek();
    cout<<peek;
    
    return 0;
}