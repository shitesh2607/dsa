// Problem statements := https://leetcode.com/problems/design-hashset/submissions/
#include<bits/stdc++.h>
using namespace std;
// method 1
class MyHashSet {
public:
    vector<int>A;
    int size;
    MyHashSet() {
         size=1e6+1;
        A.resize(size);
    }
    
    void add(int key) {
            A[key]=1;

    }
    
    void remove(int key) {
            A[key]=0;
    }
    
    bool contains(int key) {
        return A[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
// Method 2

class MyHashSet {
public:
    vector<list<int>>A;
    int size;
    MyHashSet() {
         size=1e6+1;
        A.resize(size);
    }
    int hash_function(int key){
        return key%size;
    }
    list<int> :: iterator search_function(int key){
        int i = hash_function(key);
        return find(A[i].begin(), A[i].end(), key);
    }
    void add(int key) {
        if(contains(key))return ;
        int i = hash_function(key);
        A[i].push_back(key);

    }
    
    void remove(int key) {
        if(!contains(key)) return ;
        int i = hash_function(key);
        A[i].erase(search_function(key));
    }
    
    bool contains(int key) {
        int i = hash_function(key);
        if(search_function(key) != A[i].end())return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */