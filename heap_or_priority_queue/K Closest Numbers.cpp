#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void K_Closest_Numbers(vector<int>nums, int k, int x, vector<int>&ans){
    priority_queue<pair<int, int>> maxHeap;
    for(auto a:nums){
        int diff = abs(a-x);
        maxHeap.push({diff, a});
        if(maxHeap.size()>k){
            maxHeap.pop();
        }
    }
    int s = maxHeap.size();
    while(s--){
        ans.push_back(maxHeap.top().second);
        // cout<<maxHeap.top().first<<" "<<maxHeap.top().second<<endl;
        maxHeap.pop();
    }
    sort(ans.begin(), ans.end());
    return;
}
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int>ans;
        K_Closest_Numbers(arr, k, x, ans);
        return ans;
    }
};