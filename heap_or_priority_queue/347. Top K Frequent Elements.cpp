#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> Top_K_Element(vector<int>nums, int k){
    unordered_map<int, int>hm;
    for(auto i:nums){
        hm[i]++;
    }

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minheap;
    for(auto a : hm){
        minheap.push({a.second, a.first});
        if(minheap.size()>k){
            minheap.pop();
        }
    }
    int minheapsize = minheap.size();
    vector<int> ans;
    while(minheapsize--){
        ans.push_back(minheap.top().second);
        minheap.pop();
    }
        return ans;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        return Top_K_Element(nums, k);
    }
};


int main(){
    vector<int> nums = {3, 1, 4, 4, 5, 2, 6, 1};
    int k =2;
    Solution s;
    vector<int> ans = s.Top_K_Element(nums, k);
    for(auto a: ans){
        cout<<a<<endl;
    }
    return 0;
}
