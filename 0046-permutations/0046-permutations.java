
class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> result = new ArrayList<>();
        backtrack(result, new ArrayList<>(), nums, new boolean[nums.length]);
        return result;
    }
    private void backtrack(List<List<Integer>> result, List<Integer> current, int[] nums, boolean[] used) {
        if (current.size() == nums.length) {
            result.add(new ArrayList<>(current));
            return;
        }
        
        for (int i = 0; i < nums.length; i++) {
            if (used[i]) continue; // Skip used elements
            current.add(nums[i]);
            used[i] = true;
            backtrack(result, current, nums, used);
            current.remove(current.size() - 1);
            used[i] = false;
        }
    }
}
