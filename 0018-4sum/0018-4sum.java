class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        List<List<Integer>> quads = new ArrayList<>();
        int n = nums.length;

        //if fewer elements return empty arr
        if (n < 4) return quads;

        Arrays.sort(nums);

        for (int a = 0; a < n - 3; a++) {
            //skip duplicates
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            
            // Early termination if the smallest possible sum is greater than the target
            if (sum4(nums[a], nums[a + 1], nums[a + 2], nums[a + 3]) > target) break;
        
            // Early termination if the largest possible sum is less than the target
            if (sum4(nums[a], nums[n - 1], nums[n - 2], nums[n - 3]) < target) continue;

            for (int b = a + 1; b < n - 2; b++) {
                //skip duplicates
                if (b > a + 1 && nums[b] == nums[b - 1]) continue;
                
                // Early termination if the smallest possible sum is greater than the target
                if (sum4(nums[a], nums[b], nums[b + 1], nums[b + 2]) > target) break;
                // Early termination if the largest possible sum is less than the target
                if (sum4(nums[a], nums[b], nums[n - 1], nums[n - 2]) < target) continue;

                int c = b + 1, d = n - 1; // another 2 pointers after fixing a and b
                while (c < d) {
                    long sum = sum4(nums[a], nums[b], nums[c], nums[d]);
                    if (sum < target) {
                        c++; //move right to inc sum
                    } else if (sum > target) {
                        d--; // move left to dec sum 
                    } else {
                        quads.add(Arrays.asList(nums[a], nums[b], nums[c], nums[d]));
                        c++;
                        d--;

                        while (c < d && nums[c] == nums[c - 1]) c++;
                        while (c < d && nums[d] == nums[d + 1]) d--;
                    }
                }
            }
        }
        return quads;
    }

    //function to compute the sum of four integers with type casting
    private long sum4(int a, int b, int c, int d) {
        return (long) a + b + c + d;
    }
}