#include<bits/stdc++.h>
using namespace std;
int First_Index_of_Occurrence(vector<int>arr, int index, int target){
    if(index == arr.size()){
        return -1;
    }
    
    int Last_Index = First_Index_of_Occurrence(arr, index+1, target);
    
    if(Last_Index==-1){
        if(arr[index]==target){
            return index;
        }else{
            return -1;
        }
    }else{
        return Last_Index;
    }
    
    
}

int main()
{
    vector<int> v{12, 43, 21, 6, 34, 12, 6, 4, 6, 8, 8, 56, 98, 8};
    int ans;
    ans = First_Index_of_Occurrence(v, 0, 6);
    cout<<ans<<endl;

    return 0;
}
