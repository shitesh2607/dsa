import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class MajorityElement2 {

    public static void main(String[] args) {
        List<Integer> arry=new ArrayList<>();
        int[] arr = {3, 2, 3,2,3};
        arry=majorityElement(arr);
        for (int n:arry) {
            System.out.println(n);
        }
    }
    public static List<Integer> majorityElement(int[] nums) {

        List<Integer> arr= new ArrayList<>();
        HashMap<Integer,Integer>map=new HashMap<>();
        int n=nums.length;

        for (int num : nums) {
            map.put(num, map.getOrDefault(num,0) + 1);
        }
        for(Integer val:map.keySet()){
            int k=map.get(val);
            if(k>(n/3)){
                arr.add(val);
            }
        }
        return arr;
    }


//    Method 2

    public static List<Integer> majorityElementM2(int[] nums) {

        List<Integer> arr= new ArrayList<>();
        int n=nums.length;

        int me1=Integer.MIN_VALUE;
        int me2=Integer.MIN_VALUE;
        int cnt1=0;
        int cnt2=0;
        for (int i=0;i<n;i++){
            if(cnt1==0 && me2!=nums[i])me1=nums[i];
            if(cnt2==0 &&me1!=nums[i])me2=nums[i];

            if(me1==nums[i]){
                cnt1++;
            } else if (me2==nums[i]) {
                cnt2++;
            }else {
                cnt1--;
                cnt2--;
            }
        }

        arr.add(me1);
        arr.add(me2);
        return arr;
    }
}
