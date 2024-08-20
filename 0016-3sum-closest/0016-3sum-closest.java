class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int close = 0,i;
        int min = Integer.MAX_VALUE;
        for(i=0;i<nums.length-2;i++){
            int j=i+1;
            int k = nums.length-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==target){
                    return sum;
                }
                if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
                int diff = Math.abs(sum-target);
                if(diff<min){
                    min = diff;
                    close = sum;
                }
            }
        }
        return close;
    }
}