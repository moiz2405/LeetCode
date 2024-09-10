class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> res = new ArrayList<>();
        Arrays.sort(candidates);  
        makeCombination(0, candidates, target, res, new ArrayList<>());
        return res; }
    public void makeCombination(int idx, int[] candidates, int target, List<List<Integer>> res, List<Integer> comb) {
        if (target == 0) { 
            res.add(new ArrayList<>(comb));  
            return;
        }
        for (int i = idx; i < candidates.length; i++) {
            if (i > idx && candidates[i] == candidates[i - 1]) {
                continue;
            }
            if (candidates[i] > target) {  
                break;
            }
            comb.add(candidates[i]);  
            makeCombination(i + 1, candidates, target - candidates[i], res, comb);  
            comb.remove(comb.size() - 1);  
        }
    }
}
