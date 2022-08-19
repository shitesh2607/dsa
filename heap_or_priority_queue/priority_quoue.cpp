#include <bits/stdc++.h>
using namespace std;

int main(){
    // MAX Heap
    priority_queue<int> pq;
    pq.push(23);
    pq.push(22);
    pq.push(34);
    pq.push(45);

    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;
    cout<<endl;
    // MIN Heap
    priority_queue<int, vector<int>, greater<int>>minheap;
    minheap.push(23);
    minheap.push(22);
    minheap.push(34);
    minheap.push(12);

    cout<<minheap.top()<<endl;
    // minheap.pop();
    cout<<minheap.size()<<endl;
    cout<<minheap.empty()<<endl;
    cout<<endl;
    return 0;
}
