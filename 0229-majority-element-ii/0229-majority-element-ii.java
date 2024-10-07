import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> result = new ArrayList<>();

        HashMap<Integer, Integer> countMap = new HashMap<>();

        int target = nums.length / 3; 

        for (int num : nums) {
            countMap.put(num, countMap.getOrDefault(num, 0) + 1);
        }

        for (Integer key : countMap.keySet()) {
            if (countMap.get(key) > target) {
                result.add(key);
            }
        }

        return result; 
    }
}
