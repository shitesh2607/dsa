package org.binarySearch;

public class Search_Element_Rotated_Sorted_Arr_2 {

    public static void main(String[] args) {
        int[]nums={3,1,2,3,3,3,3,3};
        int k=5;
        System.out.println(search(nums,k));
    }

    public static boolean search(int[]nums,int target){

        int low=0;
        int n=nums.length;
        int high=n-1;

        while(low<=high){

            int mid=(low+high)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[low]==nums[mid]&&nums[high]==nums[mid]){
                low=low+1;
                high=high-1;
                continue;
            }

            if(nums[low]<=nums[mid]){
                if(target>=nums[low] && target<=nums[mid]){
                    high=mid-1;
                }else{
                    low=mid+1;
                }
            }else{
                if(target>=nums[mid] && target<=nums[high]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }
        }

        return false;
    }
}
