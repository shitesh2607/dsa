package org.binarySearch;

public class Minimum_days_to_make_M_bouquets {



    public int possible(int[]bloomDay, int day, int m, int k){

        int cntr=0;
        int total=0;
        for(int i=0;i<bloomDay.length;i++){
            if(bloomDay[i]<=day){
                cntr++;
            }else {
                total+=(cntr/k);
                cntr=0;
            }
        }
        return 0;
    }
}
