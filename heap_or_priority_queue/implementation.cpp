#include <bits/stdc++.h>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    // method 1
    // void insert(int val){
    //     size++;
    //      int index = size-1;
    //      if(arr[index/2]>val){
    //         arr[index] = val;
    //         return;
    //      }
    //      swap(arr[index/2], arr[index]);
    //      insert(val);
    // }
    //method 2
    void insert2(int val){
        // TC= o(logN)
        size++;
        int index = size;
        arr[index] = val;
        while(index>1){
            int parent = index/2;
            if(arr[parent]<arr[index]){
                swap(arr[parent], arr[index]);
                index = parent;
            }else{
                return;
            }
        }
    }
    void deletion(){
        // TC = o(log(N))
        if(size==0){
            cout<<"nothing to delete";
            return;
        }
        int i=1;
        arr[1] = arr[size];
        size--;
        // take root node to its currect position
        cout<<size<<endl;
        while (i<size)
        {
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;
            if(leftIndex<rightIndex && arr[i]<arr[leftIndex]){
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }else if(rightIndex<size && arr[i]<arr[rightIndex]){
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }else{
                return;
            }
        }
        
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};

void heapify(vector<int>& arr, int size, int index){
     
     int largest = index;
     int left = 2*index;
     int right = 2*index+1;
     if(left<=size && arr[largest]<arr[left]){
        largest = left;
     }
     if(right<=size && arr[largest]<arr[right]){
        largest  = right;
     }

     if(largest != index){
        swap(arr[largest], arr[index]);
        heapify(arr, size, largest);
     }
}
void heapSort(vector<int> &arr, int size, int i){
    if(size==1){
        return;
    }
    swap(arr[i], arr[size]);
    size--;
    cout<<"hh"<<endl;
    heapify(arr, size, i);
    heapSort(arr, size, i);
    // tc = o(nlog(n))
}

int main(){
    heap h;
    h.insert2(54);
    h.insert2(53);
    h.insert2(52);
    h.insert2(50);
    h.insert2  (55);
    // h.insert2(55);
    h.insert2(70);
    // h.insert2(80);
    // h.insert2(90);
    h.print();
    h.deletion();
    h.print();

    vector<int> arr = {-1, 54, 53, 55, 52, 50};
    int n = 5;
    for(int i=n/2; i>0;i--){
        heapify(arr, n, i);
    }
    for(int i=1;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    heapSort(arr, n, 1);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}