class Solution {
    public int searchInsert(int[] nums, int target) {
        int s = nums.length;  
        for (int i = 0; i < s; i++) {
            if (nums[i] >= target) {  
                return i;  
            }
        }
        return s;  
    }
}
