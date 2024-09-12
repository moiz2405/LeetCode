class Solution {
    public boolean canJump(int[] nums) {
        int step=0,sum=0,n;
        n=nums.length;

       for(int i =0;i<n;i++){
             if(i>step){

            return false;
             }
         step = Math.max(step,nums[i]+i);
            // sum = Math.max(sum,step);
            if(step>=n-1)
            return true;
       }
            return false;
        }
}