package org.binarySearch;

import java.util.HashMap;
import java.util.Map;

public class Single_Element_in_Sorted_Array {
    public static void main(String[] args) {

        int[] arr={1,1,2,3,3,4,4,8,8};

    }


//    -----------------Method1----------
    public void UsingHashMap(){
        HashMap<Integer, Integer> map=new HashMap<>();

        int[] arr={1,1,2,3,3,4,4,8,8};

        for (int i : arr) {
            map.put(i, map.getOrDefault(i,0 )+1);
        }

        for (Map.Entry<Integer, Integer> e : map.entrySet()) {
            if(e.getValue()==1){
                System.out.println(e.getKey());
            }
        }
    }

//    --------------------------Method 2-----------------
    public int UsingBruteForce(int []nums){
        int n=nums.length;
        int ans=0;
        if(n==1){
            ans=nums[0];
            return ans;
        }

        for(int i=0;i<n;i++){
            if(i==0){
                if(nums[i]!=nums[i+1]){
                    ans=nums[i];
                    return ans;
                }
            } else if (i==n-1) {
                if(nums[i]!=nums[i-1]){
                    ans=nums[i];
                    return ans;
                }
            }else {
                if(nums[i-1]!=nums[i] || nums[i+1]!=nums[i]){
                    ans=nums[i];
                    return ans;
                }
            }
        }
        return ans;
    }

//    -------------------Binary Search---------------------
    public int BinarSearch(int[] nums){

        return 0;
    }
}
