
#include<bits/stdc++.h>
using namespace std;
vector<int> All_Index(vector<int>arr, int target, int index, int found_so_far){
    if(index == arr.size()){
        vector<int> a(found_so_far,0);
        return a;
    }
    
    
    if(arr.at(index)==target){
        vector<int> temp_arr = All_Index(arr, target, index+1, found_so_far+1);
        temp_arr[found_so_far] = index;
        return temp_arr;
    }else{
        vector<int> temp_arr = All_Index(arr, target, index+1, found_so_far);
        return temp_arr;
    }
    
}

int main()
{
    vector<int> v{12, 43, 21, 6, 34, 12, 6, 4, 6, 8, 8, 6, 98, 8};
    vector<int> ans;
    ans = All_Index(v, 6, 0, 0);
    
    for(auto x: ans){
        cout<<x<<endl;
    }
    

    return 0;
}
