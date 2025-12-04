package org.binarySearch;

public class Search_Element_Rotated_Sorted_Arr_1 {
    public static void main(String[] args) {

        int[] list={7,8,9,1, 2, 3, 4, 5,6};
        int n=list.length;
        int target=3;
        System.out.println(searchTarget(list, n, target));
    }

    public static int searchTarget(int[] nums, int n,int k){

        int low=0;
        int high=n-1;

        while(low<=high){

            int mid=(low+high)/2;
            if(nums[mid]==k){
                return mid;
            }

            if(nums[low]<=nums[mid]){
                if(k>=nums[low]&&k<=nums[mid]){
                    high=mid-1;
                }else {
                    low=mid+1;
                }
            }else{
                if(k<=nums[high]&&k>=nums[mid]){
                    low=mid+1;
                }else{
                    high=mid-1;
                }
            }

        }
        return -1;
    }
}
