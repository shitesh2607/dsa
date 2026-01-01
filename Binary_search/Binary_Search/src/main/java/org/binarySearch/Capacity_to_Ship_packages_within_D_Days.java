package org.binarySearch;

public class Capacity_to_Ship_packages_within_D_Days {

    public static void main(String[] args) {
        int[] weights={1,2,3,4,5,6,7,8,9,10};
        int days=5;
        int mx=0;
        int sum=0;
        for(int j :weights){
            mx=Math.max(j, mx);
            sum+=j;
        }

        System.out.println(mx);
        System.out.println(sum);

        for(int k=mx;k<=sum;k++){
            int ans=findDays(weights, k);
            if(ans<=days){
                System.out.println(ans);
                System.out.println(k);            }
        }

    }

    public static int findDays(int[]wt, int cap){
        int day=1;
        int load=0;
        for(int i=0;i<wt.length;i++){
            if(load+wt[i]>cap){
                day=day+1;
                load=wt[i];
            }else{
                load+=wt[i];
            }
        }
        return day;
    }
}
