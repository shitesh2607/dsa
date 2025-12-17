package org.Heap_hashMap;

import java.util.HashMap;
import java.util.HashSet;

public class Longest_Consecutive_Sequence {

    public static void main(String[] args) {

        int[] nums={100,4,200,1,3,2};



    }
    public void UsingHashSet(int[] nums){
        int n=nums.length;
        HashSet<Integer>set= new HashSet<>();
        for (int i:nums){
            set.add(i);
        }

        int longest=0;

        for(int i: nums){
            if(!set.contains(i-1)){

                int curr=i;
                int len=1;
                while(set.contains(i+1)){
                    len++;
                }
                longest=Integer.max(longest, len);
            }
        }
        System.out.println(longest);
    }

    public void UsingHashMap(int[] nums){
        HashMap<Integer, Boolean>map=new HashMap<>();

        for (int i :nums) {
            map.put(i, true);
        }

        for (int m :nums) {
            if(map.containsKey(m-1)){
                map.put(m, false);
            }
        }

        int mxLen=0;
        int mxStrtPoint=0;
        for (int j : nums){
            if(map.get(j)==true){
                int tepLen=1;
                int temStrtPoint=j;
                while(map.containsKey(temStrtPoint+tepLen)){
                    tepLen++;
                }
                if(tepLen>mxLen){
                    mxStrtPoint=temStrtPoint;
                    mxLen=tepLen;
                }
            }
        }

        System.out.println(mxLen);
    }
}
