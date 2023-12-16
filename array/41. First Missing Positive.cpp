class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for(int i=0; i<nums.size()-2;i++){
            if((nums[i]+1)>0 && nums[i+1] != nums[i]+1){
                return nums[i]+1;
            }
        }
        return nums[n-1]+1;
    }
};
// TC = o(nlogn)
// sc = o(1)