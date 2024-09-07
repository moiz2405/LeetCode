class Solution {
    public int divide(int dividend, int divisor) {

        if (dividend == Integer.MIN_VALUE && divisor == -1) {
            return Integer.MAX_VALUE;
        }

        int result = dividend / divisor;
        return Math.max(Integer.MIN_VALUE, Math.min(Integer.MAX_VALUE, result));
    }
}