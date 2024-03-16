#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    void generateCombinationSums(int index, int target, vector<int>&subSet, vector<int>&nums){
        if(nums.size()==index){
            if(target==0){
                ans.push_back(subSet);
            }
            return;
        }
        if(target>=nums[index]){
            subSet.push_back(nums[index]);
            generateCombinationSums(index, target-nums[index], subSet, nums);
            subSet.pop_back();
        }
        generateCombinationSums(index+1, target, subSet, nums);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>empty;
        generateCombinationSums(0, target, empty, candidates);
        return ans;
    }
};

int main(){
    vector<int>v = {2,3,6,7};
    vector<vector<int>>ans;
    Solution s;
    ans = s.combinationSum(v, 7);
    for(auto x: ans){
        for(auto a:x){
            cout<<a<<" ";
        }
        cout<<endl;
    }
    return 0;
}