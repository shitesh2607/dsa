package org.binarySearch;

import java.util.Arrays;

public class Nth_root_of_an_Integer {



    public int minEatingSpeed(int[] piles, int h) {
        int ans=0;
        int mx=0;
        for(int i:piles){
            mx=Math.max(i, mx);
        }

        for(int i=1;i<=mx;i++){
            int sum=0;
            for(int j=0;j<piles.length;j++){
                int t= (int) Math.ceil((double)piles[j]/i);
                sum+=t;
            }
            if(sum<=h){
                ans=sum;
                return ans;
            }
        }

        return -1;
    }

    public int minEatingSpeed2(int[] piles, int h) {
        int mx=0;
        for(int i:piles){
            mx=Math.max(i, mx);
        }
        int low=1;
        int high=mx;
        int ans=Integer.MAX_VALUE;

        while(low<=high){
            int mid=low + (high - low) / 2;
            long ţempVar=calculateSum(piles,mid);
            if(ţempVar<=h){
                ans =mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }

    public long calculateSum(int[] piles, int k){
        long total=0;
        for (int p : piles) {
            total += (p + k - 1L) / k;
        }
        return total;
    }

}
