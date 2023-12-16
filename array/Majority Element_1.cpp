class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int, int>A;
        for(auto a:nums){
            A[a]++;
            if(A[a]>n/2){
                return a;
            }
        }
        return -1;
        
    }
};