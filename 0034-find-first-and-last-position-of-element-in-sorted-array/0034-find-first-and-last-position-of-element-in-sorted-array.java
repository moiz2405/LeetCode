class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] result = {-1, -1};  
        result[0] = findFirstOccurrence(nums, target);
        if (result[0] != -1) {
            result[1] = findLastOccurrence(nums, target);
        }
        return result;
    }
    private int findFirstOccurrence(int[] nums, int target) {
        int low = 0, high = nums.length - 1;
        int firstIndex = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                firstIndex = mid; 
                high = mid - 1;   
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return firstIndex;
    }
    private int findLastOccurrence(int[] nums, int target) {
        int low = 0, high = nums.length - 1;
        int lastIndex = -1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                lastIndex = mid; 
                low = mid + 1;   
            } else if (nums[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return lastIndex;
    }
}
