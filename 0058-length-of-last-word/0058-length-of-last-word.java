class Solution {
    public int lengthOfLastWord(String s) {
        int length=0;
        int n = s.length();
        int i = n-1;
        while(i>=0 && s.charAt(i)==' '){
            i--;
        }

        while(i>=0 && s.charAt(i)!=' '){
            length++;
            i--;
        }
        return length;
    }
}