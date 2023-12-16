#include <bits/stdc++.h>
using namespace std;

class Solution { 
public:
    void wiggleSort(vector<int>& nums) {
//         step 1= Sort array
//         make extra array & manage equlity in it
//         fill inpur array from result array
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<int>result(n);
        int i=1;
        int j = n-1;
        while(i<n){
            result[i] = nums[j];
            i+=2;
            j--;
        }
        i =0;
        while(i<n){
            result[i] = nums[j];
            i+=2;
            j--;
        }
        for(int i=0;i<n;i++){
            nums[i] = result[i];
        }
    }
};
// TC = o(nlogn)
// sc = o(n)

// optimal aproach
class Solution { 
public:
    void wiggleSort(vector<int>& nums) {
//         step 1= Sort array
//         make extra array & manage equlity in it
//         fill inpur array from result array
        int n = nums.size();
        priority_queue<int> q(nums.begin(), nums.end());        
        int i=1;
        while(i<n){
            nums[i] = q.top();
            i+=2;
            q.pop();
        }
        i =0;
        while(i<n){
            nums[i] = q.top();
            i+=2;
            q.pop();
        }
    }
};
// TC = o(nlogn)