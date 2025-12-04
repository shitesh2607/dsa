public class MajorityElement {
    public int majorityElement(int[] nums) {
        int len=nums.length;
        int me=nums[0];
        int count=0;

        for(int i=0;i<len;i++){
            if(count==0)me=nums[i];
            if(me==nums[i]){
                count++;
            }else{
                count--;
            }
        }

        int meCount=0;
        for(int j=0;j<len;j++){
            if(nums[j]==me){
                meCount++;
            }
        }

        if(meCount>(len/2))
            return me;

        return 0;
    }
}
