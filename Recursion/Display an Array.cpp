#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> arr, int index){
    if(index == arr.size()){
        return;
    }
    
    printArray( arr, index+1);
    cout<<arr.at(index)<<endl;
}

int main()
{
    vector<int>a{92, 54, 65, 54, 32, 43};
    printArray(a, 0);
    return 0;
}
