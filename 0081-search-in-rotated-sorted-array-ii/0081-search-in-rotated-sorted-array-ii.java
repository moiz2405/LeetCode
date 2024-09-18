class Solution {
    public boolean search(int[] nums, int target) {
        int n = nums.length;
        boolean ans=false;
        for(int i =0;i<n;i++){
            if(nums[i]==target){
                ans= true;
            }
        
        }
        return ans;
    }
}