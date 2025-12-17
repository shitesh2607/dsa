package org.binarySearch;

import javax.naming.PartialResultException;

public class Min_In_Rot_sorted_Arr_1 {
    public static void main(String[] args) {

        int[] list={3,1,2};
        System.out.println(search(list));
    }

    public static int search(int[]nums){
        int target=Integer.MAX_VALUE;
        int low=0;
        int n=nums.length;
        int high=n-1;

        while (low<=high){
            int mid=(low+high)/2;

            if(nums[mid]<=nums[high]){
                target=Integer.min(nums[mid],target);
                high=mid-1;
            }else{
                low=mid+1;
                target=Integer.min(target, nums[mid]);
            }
        }
        return target;
    }
}
