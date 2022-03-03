#include <iostream>
#include <vector>
using namespace std;

void BubbleSort(vector<int>arr, int i, int j){
    if(i==0){
        return;
    }
    
    if(i<j){
        if(arr.at(i)>arr.at(j)){
            swap(arr.at(i), arr.at(j));
        }
        BubbleSort(arr, i+1, j+1);
    }else{
        BubbleSort(arr, i+1, j+1);
    }
}

int main()
{   
    vector<int> arr = {2,4,1,5,7,3};
    // BubbleSort(arr, -1, 0);
    cout <<"arr"; 
    return 0;
}
