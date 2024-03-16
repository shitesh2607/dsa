#include <bits/stdc++.h>
using namespace std;

int find_element(vector<int>arr){
    if(arr.size()==0){
        return -1;
    }

    if(arr.size() == 1 || arr[0] < arr[arr.size()-1]){
        return -1;
    }
    int start = 0;
    int end = arr.size()-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(mid < arr.size()-1 && arr[mid] > arr[mid+1]){
                return arr[mid + 1];
        }
        if(arr[start]<=arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1; 
}




int main(){
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = find_element(arr);
    cout<<ans;
    return 0;
}