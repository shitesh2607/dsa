#include <bits/stdc++.h>
using namespace std;

void smallest_element(vector<int>&nums, int k){
    priority_queue<int, vector<int>, greater<int>> minheap;
    int index = 0;
    for(int i =0; i<nums.size();i++){
        minheap.push(nums[i]);
        if(minheap.size()>k){
            nums[index] = minheap.top();
            index++;
            minheap.pop();
        }
    }
    int n = minheap.size();
    while(n--){
        nums[index] = minheap.top();
        index++;
        minheap.pop();
    }
    return;
}
int main(){
    vector<int> nums = {6,5, 3, 2, 8, 10, 9};
    int k =3;
    smallest_element(nums, k);
    for(auto a: nums){
        cout<<a<<endl;
    }
    return 0;
}
//TC = o(Nnlogk)
// SC = n