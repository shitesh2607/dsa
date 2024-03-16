#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>>ans;
    
    void permutations(vector<int>& nums, vector<int>prmtn, int freq[]){
        if(prmtn.size()== nums.size()){
            ans.push_back(prmtn);
            return;
        }
        
        for(int i=0; i<nums.size();i++){
            if(freq[i]==0){
                prmtn.push_back(nums[i]);
                freq[i]=1;
                permutations(nums, prmtn, freq);
                freq[i]=0;
                prmtn.pop_back();
            }
            
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums){
        int freq[nums.size()];
        for(int i=0; i<nums.size();i++){
            freq[i]=0;
        }
        vector<int>prmtn;
        permutations(nums, prmtn, freq);
        return ans;
    }
};
// time n! (factorial) for generating the all permutations & n for looping 
// n!*n
// space = if we ignore the ans ds n for ech permutations and n for arr[](freq)
//total space = n + n