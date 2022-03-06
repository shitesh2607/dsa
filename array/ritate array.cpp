/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{-1, -2, 3, 1, -4, 2, 5};
    int n = nums.size();
    int temp=nums[n -1];
    for(int i=n-1; i>0;i--){
        nums[i] = nums[i-1];
    }
    nums[0] = temp; 
    
    
    for(auto x:nums){
        cout<<x<<endl;
    }

    return 0;
}
