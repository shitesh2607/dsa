package org.binarySearch;

public class Square_Root_of_NUmber {

    public static void main(String[] args) {

        int ans =sqrt(28);
        System.out.println(ans);
    }

    public static int sqrt(int n){
        int low=1;
        int high=n;
        int ans=1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(((mid*mid)<=n)){
                low=mid+1;
                ans=mid;
            } else{
                high=mid-1;
            }
        }
        return ans;
    }
}
