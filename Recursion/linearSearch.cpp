#include<bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>arr, int target, int index){
    if(index == arr.size()){
        return false;
    }
    return (arr[index] == target) || linearSearch(arr,target,index+1);
 }


int main()
{   vector<int> v{ 10, 20, 30 };
    bool ans;
    ans  = linearSearch(v, 40, 0);
    cout<<ans;

    return 0;
}
