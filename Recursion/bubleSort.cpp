#include <bits/stdc++.h>
using namespace std;

void BubbleSort(vector<int>&arr, int size, int i){
    if(size==0){
        return;
    }
    
    if(i<size){
        if(arr.at(i)>arr.at(i+1)){
            swap(arr.at(i), arr.at(i+1));
        }
        BubbleSort(arr, size, i+1);
    }else{
        BubbleSort(arr, size-1, 0);
    }
}

int main()
{   
    vector<int> arr{2,4,1,5,7,3};
    BubbleSort(arr, arr.size()-1, 0);
    for(int &c: arr){
        cout << c << std::endl;
    }
    return 0;
}
