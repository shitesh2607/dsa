#include <bits/stdc++.h>
using namespace std;

int smallest_element(vector<int>nums, int k){
    priority_queue<int> pq;
    for(int i =0; i<nums.size();i++){
        pq.push(nums[i]);
        if(pq.size()>k){
            pq.pop();
        }
    }
    return pq.top();
}
int main(){
    vector<int> nums = {2,4,3,8,6,5};
    int k =3;
    return smallest_element(nums, k);
}