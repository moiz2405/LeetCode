class Solution {
    public int longestConsecutive(int[] nums) {
        Arrays.sort(nums);
    if(nums.length==0){
        return 0;
    }

            int cons=1,maxcon =1;
        for(int i = 1;i<nums.length;i++){
            if (nums[i] == nums[i - 1]) {
                continue; // Just skip the duplicate number
            } 
            else if(nums[i-1]==nums[i]-1){
                cons++;
            }
            else{
                maxcon = Math.max(maxcon,cons);
                cons = 1;
            }

        }
                maxcon = Math.max(maxcon,cons);
        return maxcon;
    }
}
