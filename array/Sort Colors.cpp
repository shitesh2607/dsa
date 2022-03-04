#include <bits/stdc++.h>
using namespace std;
// https://www.youtube.com/watch?v=2C4CQ32961Y
// duch national flag algorithms
void sortColors(vector<int>& nums) {
        int low = 0;
        int mid=0;
        int high=nums.size() - 1;
        while(mid<=high){

        switch(nums[mid]){
            case 0:
                swap(nums[low++], nums[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid], nums[high--]);
                break;
        }
        }

        
    }