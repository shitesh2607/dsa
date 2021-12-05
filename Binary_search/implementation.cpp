#include<bits/stdc++.h>
using namespace std;

bool Binary_search( vector<int> &nums, int target ){
    int n = nums.size()-1;
    int s=0;
    int e = n;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            return true;
        }else if(nums[mid]<target){
            s = mid+1;
        }else{
            e = mid-1;
        }
    }
    return false;

}

int main(){
    vector<int> nums = {2, 4, 5, 56,67, 87, 98, 99, 100};
    int target = 88;
    bool ans;
    ans = Binary_search(nums, target);
    cout<<ans<<endl;
    return 0; 
}