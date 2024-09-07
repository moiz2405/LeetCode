import java.util.Arrays;

class Solution {
    public void nextPermutation(int[] nums) {
        int i = nums.length - 2;
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }
        if (i < 0) {
            Arrays.sort(nums);
            return;
        }
        int j = nums.length - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        Arrays.sort(nums, i + 1, nums.length);
    }

    public static void main(String[] args) {
        int[] nums = {1, 2, 3};
        Solution sol = new Solution();
        sol.nextPermutation(nums);
        System.out.println(Arrays.toString(nums));
    }
}
