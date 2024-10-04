class Solution {
    public List<String> restoreIpAddresses(String s) {
        List<String> result = new ArrayList<>();
        if (s.length() < 4 || s.length() > 12) {
            return result;  
        }
        backtrack(result, s, 0, new ArrayList<>());
        return result;
    }

    private void backtrack(List<String> result, String s, int start, List<String> path) {
        if (path.size() == 4 && start == s.length()) {
            result.add(String.join(".", path));
            return;
        }
        if (path.size() == 4) {
            return;
        }
        for (int length = 1; length <= 3; length++) {
            if (start + length <= s.length()) {
                String segment = s.substring(start, start + length);
                if (isValid(segment)) {
                    path.add(segment);  
                    backtrack(result, s, start + length, path);  
                    path.remove(path.size() - 1);  
                }
            }
        }
    }

    private boolean isValid(String segment) {
        if (segment.length() > 1 && segment.startsWith("0")) {
            return false;
        }
        int num = Integer.parseInt(segment);
        return num >= 0 && num <= 255;
    }
}
