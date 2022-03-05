#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums{-1, -2, 3, 1, -4, 2, 5};
    int n = nums.size();
    int i=0;
    int j=0;
    
    for(int a=0;a<n;a++){
        if(nums[a]<0){
            swap(nums[i], nums[j]);
            j++;
            i++;
        }else{
            i++;
        }
    }
    
    for(auto x:nums){
        cout<<x<<endl;
    }

    return 0;
}
