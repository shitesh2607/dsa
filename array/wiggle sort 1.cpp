#include <bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n-1;i++){
        if(i%2==0){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }else{
            if(arr[i]<arr[i+1]){
                swap(arr[i], arr[i+1]);
            }
        }
    }
    
    for(auto a: arr){
        cout<<a<<" ";
    }
    return;
}

int main()
{
    vector<int>arr= {10, 7, 6, 5, 9, 8};
    wiggleSort(arr);
    return 0;
}
// TC = o(N)
// SC = o(1)