#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int>arr, int index){
    if(index == arr.size()){
        return arr[index];
    }
    
    maxElement(arr, index+1);
 }


int main()
{   vector<int> v{ 10, 20, 30 };
    int ans;
    ans  = maxElement(v, 0);
    cout<<ans;

    return 0;
}
