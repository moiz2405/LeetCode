import java.util.HashMap;

class Solution {
    public boolean containsNearbyDuplicate(int[] nums, int k) {
        HashMap<Integer, Integer> indexMap = new HashMap<>(); 
        
        for (int i = 0; i < nums.length; i++) {
            if (indexMap.containsKey(nums[i])) {
                if (i - indexMap.get(nums[i]) <= k) {
                    return true; 
                }
            }
            indexMap.put(nums[i], i);
        }
        
        return false; 
    }
}
