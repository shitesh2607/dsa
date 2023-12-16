#include <bits/stdc++.h>
using namespace std;

int main()
{
    // cout<<"Hello World";
    std::vector<int>arr(5, 0);
    vector<vector<int>>arr2 {{1,3,2}, {2,4,3}, {0,2,-2}};
    int start =0;
    int end =0; 1-+
    
    int inc =0;
    for(int i=0; i<arr2.size();i++){
        start = arr2[i][0];
        end = arr2[i][1];
        inc = arr2[i][2];
        for(int j = start; j<=end;j++){
            arr[j] = arr[j]+inc;
        }
    }
    
    for(auto a: arr){
        cout<<a<<" ";
    }

    return 0;
}
// TC for worst case o(N^2)

// METHOD 2
