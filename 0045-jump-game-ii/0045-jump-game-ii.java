class Solution {
    public int jump(int[] nums) {
        int target = nums.length - 1; 
        int step = nums[0], sum = nums[0], count = 1;
        int n = nums.length;
        if (n <= 1) return 0;  

        for (int i = 1; i < n; i++) {  
            sum = Math.max(sum, i + nums[i]);  
            if (step >= target) {
                return count;
            }
            if (i == step) {
                count++;  
                step = sum;  
            }
        }

        return count;
    }
}
