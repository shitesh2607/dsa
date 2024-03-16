class Solution {
public:
    int modified_BS(vector<int> &arr, int target, int left, int right) {
        // not fonud
        if (left > right) {
            return -1;
        }
        //  to avoid over flow
        int mid = left +((right - left)/2);
        if(arr[mid]==target){
            return mid; //found
        }else if(arr[mid]>=arr[left]){// if left half is sorted
            
            if(arr[left]<=target && arr[mid]>=target){
                return modified_BS(arr, target, left, mid-1); 
            }else{
                return modified_BS(arr, target, mid+1, right);
            }

        }else{
            // if right half is sorted
            if(arr[mid]<=target && arr[right]>=target){
                return modified_BS(arr, target, mid+1, right); 
            }else{
                return modified_BS(arr, target, left, mid-1);
            }
        }
    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        return modified_BS(nums,target, left, right);
    }
};