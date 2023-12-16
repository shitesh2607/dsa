class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int index = abs(nums[i])-1;
            int val = nums[index];
            if(val<0){
                ans.push_back(index+1);
            }else{
                // nums[i]= -nums[i];
                nums[index]*=-1;
            }
        }
        return ans;
    }
};
// TC = o(n)
// sc = o(1)


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) { 
        int n = nums.size();
        vector<int>dup;
        if(n==1){
            return dup;
        }
        
        int i=0; 
        while(i<n){
            if(nums[i]!=nums[nums[i]-1]){
                swap(nums[i], nums[nums[i]-1]);
            }else{
                i++;
            }
        }
       
        for(int j=0;j<n;j++){
            if(nums[j] != j+1){
                dup.push_back(nums[j]);
            }
        }
        return dup;
    }
};