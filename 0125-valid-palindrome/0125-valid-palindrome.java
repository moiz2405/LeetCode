class Solution {
    public boolean isPalindrome(String s) {
        s = s.toLowerCase();
        StringBuilder a = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            char c = s.charAt(i);
            if (Character.isLetterOrDigit(c)) {
                a.append(c);
            }
        }
        int start = 0;
        int end = a.length() - 1;
        while (start < end) {
            if (a.charAt(start) != a.charAt(end)) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}
